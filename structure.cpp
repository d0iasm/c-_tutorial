#include <iostream>
#include <string>

void duplicate (int& a, int& b, int& c) {
  a *= 2;
  b *= 2;
  c *= 2;
}

int main() {
  int n = 10;

  while (n > 0) {
    std::cout << n << ", ";
    --n;
  }
  std::cout << "liftoff!\n";
  
  std::string str = "Hello!";
  for (char c : str) {
    std::cout << "[" << c << "]";
  }
  std::cout << "\n";

  int x = 1, y = 3, z = 7;
  duplicate(x, y, z);
  std::cout << "x=" << x << ", y=" << y << ", z=" << z;

  return 0;
}
