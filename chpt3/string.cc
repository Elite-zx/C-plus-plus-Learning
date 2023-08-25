#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
  // copy initialization
  string s1 = {"Hello world"};
  string s2 = string(10, 'c');  // tmp obj
  // direct initialization
  string s3{"Hello world"};
  string s4(10, 'd');

  auto sz = s1.size();
}
