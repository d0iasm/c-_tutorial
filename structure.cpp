#include <iostream>
#include <string>

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

  return 0;
}
