#include <iostream>
#include <string>

class Square;

class Rectangle {
  int width, height;
public:
  Rectangle();
  Rectangle(int, int);
  int area() {
    return width * height;
  }
  void convert(Square a);
};

Rectangle::Rectangle () {
  width = 5;
  height = 5;
}

Rectangle::Rectangle (int x, int y) {
  width = x;
  height = y;
}

class Square {
  friend class Rectangle;
private:
  int side;
public:
  Square(int a) : side(a) {}
};

void Rectangle::convert(Square a) {
  width = a.side;
  height = a.side;
}

class CVector {
public:
  int x, y;
  CVector () {};
  CVector (int a, int b) : x(a), y(b) {}
  CVector operator + (const CVector&);
};

CVector CVector::operator+ (const CVector& param) {
  CVector temp;
  temp.x = x + param.x;
  temp.y = y + param.y;
  return temp;
}

class Dummy {
public:
  static int n;
  Dummy () { n++; };
  bool isitme (Dummy& param);
};

int Dummy::n = 0;

bool Dummy::isitme (Dummy& param) {
  if (&param == this) return true;
  else return false;
}

class MyClass {
public:
  int x;
  MyClass(int val) : x(val) {}
  int get() {return x;}
};

template <class T>
class Mypair {
  T a, b;
public:
  Mypair(T first, T second) {
    a = first;
    b = second;
  }
  T getmax();
};

template <class T>
T Mypair<T>::getmax() {
  T retval;
  retval = a > b ? a : b;
  return retval;
}

class Example {
  std::string* ptr;
public:
  Example() : ptr(new std::string) {}
  Example(const std::string& str) : ptr(new std::string(str)) {}
  ~Example() {delete ptr;}
  const std::string& content() const {return *ptr;}
};

class Polygon {
protected:
  int width, height;
public:
  void set_values(int a, int b) {
    width = a;
    height = b;
  }
};

class Rectangle2: public Polygon {
public:
  int area() {
    return width * height;
  }
};

class Triangle: public Polygon {
public:
  int area() {
    return width * height / 2;
  }
};

int main () {
  Rectangle rect(3, 4);
  Rectangle* rectb;
  rectb = &rect;
  std::cout << "area: " << rect.area() << std::endl;
  std::cout << "area: " << rectb->area() << std::endl;

  CVector foo(3, 1);
  CVector bar(1, 2);
  CVector result;
  result = foo + bar;
  std::cout << result.x << "," << result.y << std::endl;

  Dummy a;
  Dummy* b = &a;
  if (b->isitme(a)) {
    std::cout << "yes, &a is b\n";
  }

  std::cout << a.n << "\n";
  Dummy* c = new Dummy;
  std::cout << Dummy::n << "\n";
  delete c;

  const MyClass hoge(10);
  std::cout << hoge.x << "\n";

  Mypair<int> myobj(100, 75);
  std::cout << myobj.getmax() << std::endl;

  Example exa1;
  Example exa2("Example");
  std::cout << "exa2's content: " << exa2.content() << std::endl;

  Rectangle rect2;
  Square sqr(4);
  rect2.convert(sqr);
  std::cout << rect2.area() << std::endl;

  Rectangle2 rect3;
  Triangle trgl;
  Polygon* ppoly1 = &rect3;
  Polygon* ppoly2 = &trgl;
  ppoly1->set_values(4, 5);
  ppoly2->set_values(4, 5);
  std::cout << rect3.area() << "\n";
  std::cout << trgl.area() << "\n";

  return 0;
}
