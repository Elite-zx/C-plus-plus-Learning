#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>& container) {
  for (const auto& iter : container) cout << iter << " ";
  cout << endl;
}
int main(int argc, char** argv) {
  vector<int> vec(5);
  cout << vec.capacity() << endl;
  print(vec);
  fill_n(vec.begin(), 6, 1);  // undefined behavior
  cout << vec.capacity() << endl;
  print(vec);

  vector<int> vec1;
  fill_n(back_inserter(vec1), 6, 1);
  print(vec1);

  return 0;
}
