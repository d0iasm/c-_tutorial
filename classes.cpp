#include <iostream>

class Rectangle {
  int width, height;
public:
  Rectangle();
  Rectangle(int, int);
  int area() {
    return width * height;
  } 
};

Rectangle::Rectangle () {
  width = 5;
  height = 5;
}

Rectangle::Rectangle (int x, int y) {
  width = x;
  height = y;
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
class mypair {
  T a, b;
public:
  mypair (T first, T second) {
    a = first;
    b = second;
  }
  T getmax();
};

template <class T>
T mypair<T>::getmax() {
  T retval;
  retval = a > b ? a : b;
  return retval;
}

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

  mypair<int> myobj(100, 75);
  std::cout << myobj.getmax() << std::endl;

  return 0;
}
