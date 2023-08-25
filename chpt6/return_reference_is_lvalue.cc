#include <iostream>
#include <string>
using namespace std;

string t{"Hello,world"};
string& func1() {
  t += '!';
  return t;
}

string func2() {
  t += '!';
  return t;
}

int main(int argc, char** argv) {
  func1() = "MY hello world!";
  func2() = "MY hello world!";
  cout << func1() << endl;
  cout << func2() << endl;
  return 0;
}
