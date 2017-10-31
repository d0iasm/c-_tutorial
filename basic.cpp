#include <iostream>

#define PI 3.1415926
#define NEWLINE '\t'

int main() {
  int r;
  std::cin >> r;
  
  double circle;

  circle = 2 * PI * r;
  std::cout << circle;
  std::cout << NEWLINE;
  return 0;
}
