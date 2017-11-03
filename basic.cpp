#include <iostream>
#include <string>
#include <sstream>

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

  std::string mystr;
  float price = 0;
  int quantity = 0;
  std::cout << "Enter price: ";
  std::getline(std::cin, mystr);
  std::stringstream(mystr) >> price;

  std::cout << "Enter quantity: ";
  std::getline(std::cin, mystr);
  std::stringstream(mystr) >> quantity;

  std::cout << price << " " << quantity << std::endl;

  std::cout << "Total price: " << price * quantity << std::endl;

  return 0;
}
