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

int main () {
  Rectangle rect(3, 4);
  Rectangle * rectb;
  rectb = &rect;
  std::cout << "area: " << rect.area() << std::endl;
  std::cout << "area: " << rectb->area() << std::endl;

  return 0;
}
