#include <iostream>
#include <vector>
using namespace std;

class MyClass {
 public:
  MyClass(int a_, int b_) : a(a_), b(b_) {}

 private:
  int a;
  int b;
};

int main(int argc, char** argv) {
  vector<MyClass> v1;
  v1.emplace_back(1, 2);  // direct construct

  v1.push_back(MyClass(1, 2));

  v1.push_back(1, 2);  // can not direct construct
}
