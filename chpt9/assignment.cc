#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char** argv) {
  vector<string> v1{"jane", "july", "august"};
  vector<const char*> v2{"jane", "july", "august"};
  v1<v2;
}
