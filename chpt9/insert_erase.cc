#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>& v1) {
  for (const auto& ele : v1) cout << ele << " ";
  cout << endl;
}
int main(int argc, char** argv) {
  vector<int> v1{0, 1, 2, 3, 4};
  print(v1);
  auto iter1 = v1.erase(v1.begin(), v1.begin() + 3);
  print(v1);
  cout << *iter1 << endl;

  auto iter2 = v1.insert(v1.begin(), {0, 1, 2});
  print(v1);
  cout << *iter2 << endl;
  return 0;
}

