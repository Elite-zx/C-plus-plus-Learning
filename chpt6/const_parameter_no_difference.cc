#include <iostream>

void func(int a) { std::cout << a << std::endl; }

void func(const int a) { std::cout << a << std::endl; }

int main(int argc, char* argv[]) {
  func(100);
  return 0;
}

