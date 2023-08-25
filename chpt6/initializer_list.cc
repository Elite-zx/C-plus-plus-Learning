#include <initializer_list>
#include <iostream>
using namespace std;

void error_msg(initializer_list<string> il) {
  for (const auto& s : il) cout << s << " ";
  cout<<endl;
}

int main(int argc, char* argv[]) {
  string s1{"expected"};
  string s2{"actual"};
  error_msg({"functionX", s1, s2});
  return 0;
}
