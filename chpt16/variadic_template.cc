#include <iostream>
#include <iterator>
using namespace std;

template <typename T, typename... args>
void foo(const T& t, const args&... rest) {
  ostream_iterator<size_t> out_iter(cout, " ");
  out_iter = sizeof...(args);
  out_iter = sizeof...(rest);
  cout << endl;
}

int main(int argc, char** argv) {
  int i{0};
  double b{3.14};
  string s{"how now brown cow"};
  foo(i, b, s);
  return 0;
}
