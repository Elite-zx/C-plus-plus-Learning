#include <iostream>
using namespace std;

class foo {
 public:
  foo() = default;
  foo(int as) : access_str(as) {}
  void ModifyData() const { ++access_str; }
  void GetData() const { cout << access_str << endl; };

 private:
  const mutable int access_str;
};

int main(int argc, char** argv) {
  foo obj(2);
  obj.GetData();
  obj.ModifyData();
  obj.GetData();
  return 0;
}
