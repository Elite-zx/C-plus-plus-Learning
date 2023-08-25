#include <algorithm>
#include <deque>
#include <iostream>
#include <iterator>
using namespace std;

int main(int argc, char** argv) {
  deque<int> deq{1, 3, 4};  // empty container
  auto back_iter = back_inserter(deq);
  auto front_iter = front_inserter(deq);
  auto insert_iter = inserter(deq, deq.begin() + 1);
  *back_iter = 5;
  *front_iter = 0;
  *insert_iter = 2;

  ostream_iterator<int> out_iter(cout, " ");
  for_each(deq.begin(), deq.end(), [&](int& num) { out_iter = num; });

  cout << endl;
  return 0;
}
