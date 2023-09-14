#include <iostream>
#include <utility>
using namespace std;

void f(int&& v1, int& v2) {
  cout << "lvalue argu in function: " << ++v2 << endl;
}

template <typename F, typename T1, typename T2>
void flip(F f, T1&& t1, T2&& t2) {
  f(forward<T2>(t2), forward<T1>(t1));  // forward a rvalue
}

int main(int argc, char** argv) {
  int argu = 1;
  flip(f, argu, 42);
  cout << "argu after funtion: " << argu << endl;
}
