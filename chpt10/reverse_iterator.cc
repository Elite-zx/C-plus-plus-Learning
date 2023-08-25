#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
  vector<int> v1{1, 2, 3, 4, 5, 6};
  vector<int>::reverse_iterator riter = v1.rbegin() + 1;
  ostream_iterator<int> out_iter(cout, " ");
  out_iter = *riter;
  out_iter = *riter.base();
  cout << endl;

  return 0;
}
