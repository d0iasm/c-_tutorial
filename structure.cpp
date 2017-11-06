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

template <class S, int N>
S fixed_multiply (S val) {
  return val * N;
}

void scopes () {
  int x = 10;
  int y = 20;
  {
    // inner scope.
    int x;
    x = 50;
    y = 50;
    std::cout << "inner block: \n";
    std::cout << "x: " << x << "\n";
    std::cout << "y: " << y << "\n";
  }
  std::cout << "outer block: \n";
  std::cout << "x: " << x << "\n";
  std::cout << "y: " << y << "\n";
}

namespace first {
  int xx = 5;
  int yy = 10;
}

namespace second {
  double xx = 3.1416;
  double yy = 2.7183;
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

  std::cout << fixed_multiply<int, 2>(10) << "\n";
  std::cout << fixed_multiply<int, 3>(10) << "\n";

  scopes();

  using first::xx;
  using second::yy;
  std::cout << xx << "\n";
  std::cout << yy << "\n";
  std::cout << first::yy << "\n";
  std::cout << second::xx << "\n";
  
  return 0;
}
