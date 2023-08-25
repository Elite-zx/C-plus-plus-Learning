#include <algorithm>
#include <functional>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
using std::placeholders::_1;

bool CheckLength(int sz, string& s) { return s.size() >= sz; }
int main(int argc, char** argv) {
  vector<string> vec{"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
  for_each(vec.begin(), vec.end(),
           [](const string& s) -> void { cout << s << ' '; });
  cout << endl;
  int sz{6};
  // using lambda
  auto it1 = find_if(vec.begin(), vec.end(),
                     [&](const string& s) -> bool { return s.size() >= sz; });
  auto count1 = vec.end() - it1;
  cout << "number of string whose length greater than sz(using lambda): "
       << count1 << endl;
  // using bind function
  auto it2 = find_if(vec.begin(), vec.end(), bind(CheckLength, sz, _1));
  auto count2 = vec.end() - it2;
  cout << "number of string whose length greater than sz(using bind): "
       << count2 << endl;

  cout << endl;
  return 0;
}
