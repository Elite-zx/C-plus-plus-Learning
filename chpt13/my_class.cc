#include <iostream>

using namespace std;

class MyClass {
 public:
  MyClass(int a = 1, int b = 2) : val1(a), val2(b) {}

  MyClass(const MyClass& rhs) {
    val1 = rhs.val1;
    val2 = rhs.val2;
  }

  ~MyClass() {}

  // MyClass& operator=(const MyClass& rhs) {
  // val1 = rhs.val1;
  // val2 = rhs.val2;
  // return *this;
  //}

 private:
  int val1, val2;
};

int main(int argc, char** argv) { MyClass obj(2, 3); }
