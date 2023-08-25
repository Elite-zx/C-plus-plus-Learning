#include <iostream>
using namespace std;

class MyClass {
 public:
  MyClass(int a_, int b_) : a(a_), b(b_) {}
  MyClass() = default;

 private:
  int a;
  int b;
};

int main(int argc, char** argv) { MyClass obj; }
