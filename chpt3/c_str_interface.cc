#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
  string s{"Hello world"};
  cout << "string obj: " << s << endl;
  cout << "c-style character string: " << s.c_str() << endl;
  s.push_back('!');
  cout << "string obj: " << s << endl;
  cout << "c-style character string: " << s.c_str() << endl;
  return 0;
}
