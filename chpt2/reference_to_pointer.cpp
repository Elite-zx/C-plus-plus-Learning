#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  int ival = 11;
  int *pi;
  int *&rp = pi;  // & say rp is a reference, int * say it's type is a pointer
  rp = &ival;

  cout << "direct value: " << ival << " access value by pointer: " << *pi
       << " access value by reference: " << *rp<<endl;
  return 0;
}

