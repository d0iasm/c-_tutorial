#include <iostream>

#define PI 3.1415926
#define NEWLINE '\n'

int main() {
  int r, r2;
  std::cin >> r >> r2;
  std::clog << "Inputted first radius is: " << r << NEWLINE;
  std::clog << "Inputted second radius is: " << r2 << NEWLINE;

  double circle;

  circle = 2 * PI * r;
  std::cout << circle << std::endl;
  return 0;
}
