#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
  int i = 42;
  const int& ri = i;
  cout << "i: " << i << " ri: " << ri << endl;
  i = 24;
  cout << "i: " << i << " ri: " << ri << endl;
  return 0 ;
}
