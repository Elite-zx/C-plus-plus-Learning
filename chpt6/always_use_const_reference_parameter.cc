#include <iostream>
using namespace std;

void func(string& s) { cout << s.size() << endl; }

void func_with_const(const string& s) { cout << s.size() << endl; }

int main(int argc, char* argv[]) {
  func("Hello world!");

  func_with_const("Hello world!");
}
