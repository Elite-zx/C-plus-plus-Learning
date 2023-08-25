#include <iostream>
using namespace std;
int main(int argc, char** argv) {
  int a{2};
  auto ptr = new auto(a);
  cout << *ptr << endl;  // print 2
}
