#include <iostream>
#include <string>

int main() {
  int a=5;
  int b(3);
  int c{2};
  int result;
  std::string mystring;

  a = a + b;
  result = a - c;

  mystring = "This is a string";
  
  std::cout << mystring << std::endl;
  return 0;
}
