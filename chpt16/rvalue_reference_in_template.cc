#include <iostream>
using namespace std;

template <typename T>
void foo(T&& argu) {
  T a = argu;
  a = 1;
  cout << a << " " << argu << endl;
  return;
}
int main() {
  foo(2); // T is int
  int a = 2;
  foo(a); // T is int&
}
