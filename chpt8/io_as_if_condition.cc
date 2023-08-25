#include <iostream>

using namespace std;

int main(int argc, char** argv) {
  if (cin) cout << "convert result is true!" << endl;
  cin.setstate(cin.failbit);
  if (!cin) cout << "convert result is false!" << endl;
  return 0;
}
