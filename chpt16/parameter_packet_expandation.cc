#include <iostream>
#include <iterator>
#include <sstream>
using namespace std;

template <typename T>
ostream& print(ostream& os, const T& t) {
  return os << t;
}

template <typename T>
string debug_rep(const T& t) {
  ostringstream ret;
  ret << t;
  return ret.str();
}

template <typename T, typename... args>
ostream& print(ostream& os, const T& t, const args&... rest) {
  os << t << " ";
  return print(os, debug_rep(rest)...);
}

int main(int argc, char** argv) {
  int i{0};
  double b{3.14};
  string s{"how now brown cow"};
  print(cout, i, s, 42);
  cout << endl;
}

