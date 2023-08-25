#include <iostream>
using namespace std;

class foo {
 public:
  foo(int a_, int b_) : a(a_), b(b_) {}
  foo() = default;

  const foo& Ret_Obj_with_reference() { return *this; }

  foo Ret_Obj() { return *this; }

  void ModifyDat() {
    ++a;
    ++b;
  }

  void Get_Data() { cout << "a: " << a << "b: " << b << endl; }

 private:
  int a{2};
  int b{2};
};

int main(int argc, char** argv   )
{
  foo obj(1, 2);
  obj.Get_Data();
  obj.Ret_Obj().ModifyDat();
  obj.Get_Data();
  return 0;
}
