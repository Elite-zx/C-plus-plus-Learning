#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
  vector<int> vec1{1, 2, 3, 4, 5, 6};
  vector<int> vec2;
  cout << "original vec1: ";
  for_each(vec1.begin(), vec1.end(), [](int& x) { cout << x << ' '; });
  cout << endl;
  auto back_iter = back_inserter(vec2);
  copy(make_move_iterator(vec1.begin()), make_move_iterator(vec1.end()),
       back_iter);  // move have the same consequence as copy for build-in type
  cout << "after copy, vec1(empty like default initialization): ";
  for_each(vec1.begin(), vec1.end(), [](int& x) { cout << x << ' '; });
  cout << endl;

  cout << "after copy, vec2: ";
  for_each(vec2.begin(), vec2.end(), [](int& x) { cout << x << ' '; });
  cout << endl;
  return 0;
}
