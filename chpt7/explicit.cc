#include <iostream>
using namespace std;

class My_Class {
 public:
  My_Class(int a_, int b_) : a(a_), b(b_) {}
  explicit My_Class(int a_) : a(a_), b(0) {}
  My_Class() = default;

  void Combine(const My_Class& rhs) {
    a += rhs.a;
    b += rhs.b;
  }

  void GetObj() {
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
  }

 private:
  int a;
  int b;
};

int main(int argc, char** argv) {
  My_Class obj1(1, 2);
  obj1.Combine(1);
  obj1.GetObj();
  return 0;
}
