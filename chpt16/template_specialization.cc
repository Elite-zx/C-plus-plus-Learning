#include <cstring>
#include <iostream>
#include <string>
using namespace std;

template <typename T>
int compare(const T& v1, const T& v2) {
  if (v1 < v2) return true;
  if (v1 > v2) return false;
  return 0;  // equality
}

// template specialization
template <>
int compare(const char* const& v1, const char* const& v2) {
  return strcmp(v1, v2);
}

template <typename T>
class Foo {
 public:
  Foo(const T& t = T()) : mem(t) {}
  void Bar {
    // do something
  }
  T mem;
};

// member function specialization for class in type int
template <>
void Foo<int>::Bar {
  // do something special
}




