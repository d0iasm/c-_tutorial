#include <iostream>
#include <string>

void while_loop () {
  int n = 10;

  while (n > 0) {
    std::cout << n << ", ";
    --n;
  }
  std::cout << "liftoff!\n";
}

void string_loop() {
  std::string str = "Hello!";
  for (char c : str) {
    std::cout << "[" << c << "]";
  }
  std::cout << "\n";
}

void duplicate (int& a, int& b, int& c) {
  a *= 2;
  b *= 2;
  c *= 2;
}

int operate (int a, int b) {
  return (a * b);
}

double operate (double a, double b) {
  return (a / b);
}

template <class T>
T sum (T a, T b) {
  T result;
  result = a + b;
  return result;
}

int main() {
  int x = 1, y = 3, z = 7;
  duplicate(x, y, z);
  std::cout << "x=" << x << ", y=" << y << ", z=" << z << std::endl;

  int a = 5, b = 2;
  double c = 5.0, d = 2.0;
  std::cout << operate (a, b) << "\n";
  std::cout << operate (c, d) << "\n";

  int i = 5, j = 6, k;
  double f = 2.0, g = 0.5, h;
  k = sum<int>(i, j);
  h = sum<double>(f, g);
  std::cout << k << std::endl;
  std::cout << h << std::endl;
  
  return 0;
}
