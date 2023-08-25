#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
  vector<double> obj;
  cout << "double: " << sizeof(double) << endl;
  cout << "value_type: " << sizeof(vector<double>::value_type) << endl;
  double a = 2;
  cout << "a initialized value: " << a << endl;
  vector<double>::reference reference_obj = a;
  reference_obj = 6;
  cout << "a: " << a << endl;
  return 0;
}
