#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
  vector<string> s1(10);
  vector<string> s2{10};
  cout << "initialize with (): ";
  int cnt{0};
  for (const auto obj : s1) cout << ++cnt << ": " << obj;
  cout << endl;
  cout << "initialize with {}: ";
  cnt = 0;
  for (const auto obj : s2) cout << ++cnt << ": " << obj;
  cout << endl;

  vector<int> ivec;
  cout << ivec[0];  // this fault can not be detected by complier

  return 0;
}
