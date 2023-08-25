#include <iostream>
using namespace std;

int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
auto RetArrayPointer() -> int (*)[10] {
  int(*pa)[10] = &a;
  return pa;
}

int main(int argc, char** argv) {
  int(*ret)[10] = RetArrayPointer();
  cout << (*ret)[5] << endl;  // print 5;
}
