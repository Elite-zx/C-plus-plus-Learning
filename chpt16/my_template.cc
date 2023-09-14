#include <iostream>
using namespace std;

template <typename T>
auto bar(T begin, T end) -> decltype(*begin) {
  return *begin;
}

template <typename T1, typename T2>
T1 bar1(T2 arg2) {}

template <typename T>
void foo(const T& arg1) {}

int main(int argc, char** argv) {
  int a = 0;
  bar1<int>(a);
}
