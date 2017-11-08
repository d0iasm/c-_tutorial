#include <iostream>
#include <string>

int foo [] = {16, 2, 77, 40, 12071};
int n, result = 0;

void printarray (int arg[], int length) {
  for (int n=0; n<length; ++n) {
    std::cout << arg[n] << " ";
  }
  std::cout << "\n";
}

void printstring () {
  char q1 [] = "What is your name? ";
  std::string q2 = "Where do you live? ";
  char ans1 [80];
  std::string ans2;

  std::cout << q1;
  std::cin >> ans1;
  std::cout << q2;
  std::cin >> ans2;

  std::cout << "Hello, " << ans1;
  std::cout << " from " << ans2 << "!" << std::endl;
}

int main () {
  for (n=0; n<5; ++n) {
    result += foo[n];
  }
  std::cout << result << std::endl;

  printstring();
  
  return 0;
}
