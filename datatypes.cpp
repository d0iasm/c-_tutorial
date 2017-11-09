#include <iostream>
#include <string>
#include <sstream>
#include <new>

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

void printpointer () {
  int firstval, secondval;
  int *mypointer;

  mypointer = &firstval;
  *mypointer = 10;
  mypointer = &secondval;
  *mypointer = 20;
  std::cout << "first value is " << firstval << "\n";
  std::cout << "second value is " << secondval << "\n";
}

void increment_all (int* start, int* stop) {
  int *current = start;
  while (current != stop) {
    ++(*current);
    ++current;
  }
}

void print_all (const int* start, const int* stop) {
  const int *current = start;
  while (current != stop) {
    std::cout << *current << "\n";
    ++current;
  }
}

int addtion (int a, int b) {
  return a + b;
}

int subtraction (int a, int b) {
  return a - b;
}

int operation (int x, int y, int (*functocall)(int, int)) {
  int g;
  g = (*functocall)(x, y);
  return (g);
}

void dynamic_memory () {
  int i, n;
  int * p;
  std::cout << "How many numbers would you like to type? ";
  std::cin >> i;
  p = new (std::nothrow) int[i];
  if (p == nullptr) {
    std::cout << "Error: memory could not be allocated";
  } else {
    for (n=0; n<i; n++) {
      std::cout << "Enter number: ";
      std::cin >> p[n];
    }
    std::cout << "You have entered: ";
    for (n=0; n<i; n++) {
      std::cout << p[n] << ",  ";
    }
    delete[] p;
    std::cout << std::endl;
  }
}

struct movies_t {
  std::string title;
  int year;
} films [2];

void printmovie (movies_t movie) {
  std::cout << movie.title;
  std::cout << " (" << movie.year << ")\n";
}


int main () {
  for (n=0; n<5; ++n) {
    result += foo[n];
  }
  std::cout << result << std::endl;

  printstring();
  printpointer();

  int numbers[] = {10, 20, 30};
  increment_all(numbers, numbers+3);
  print_all(numbers, numbers+3);

  int m, n;
  int (*minus)(int, int) = subtraction;

  m = operation(7, 5, addtion);
  n = operation(20, m, minus);
  std::cout << n << std::endl;

  dynamic_memory();

  int i;
  movies_t *pmovie;
  pmovie = films;
  
  for (i=0; i<2; i++) {
    std::cout << "Enter title: ";
    std::cin >> pmovie->title;
    std::cout << "Enter year: ";
    std::cin >> pmovie->year;
    pmovie++;
  }

  std::cout << "\nYou have entered these movies:\n";
  for (i=0; i<2; i++) {
    printmovie (films[i]);
  }
  
  return 0;
}
