#include <iostream>

class Rectangle {
  int width, height;
public:
  void set_val (int, int);
  int area() {
    return width * height;
  } 
};

void Rectangle::set_val (int x, int y) {
  width = x;
  height = y;
}

int main () {
  Rectangle rect;
  rect.set_val(3, 4);
  std::cout << "area: " << rect.area() << std::endl;

  return 0;
}
