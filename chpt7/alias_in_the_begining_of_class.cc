#include <iostream>
using namespace std;

using Money = double;  // typedef double money;
class MyClass {
 public:
  Money balance() { return bal; }
  using Alias = double;
  Alias bal;
};

int main() {}
