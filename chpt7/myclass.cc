#include <iostream>
using namespace std;

class foo {
 public:
  foo(int a, int b) : attribute1(a), attribute2(b) {}

 private:
  int attribute1 = 2;
  int attribute2{3};
};
