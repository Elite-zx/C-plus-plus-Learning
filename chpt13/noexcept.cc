#include <iostream>
#include <stdexcept>
using namespace std;

void foo(int arg = 0) noexcept {
  try {
    throw runtime_error("exception is allowed even noexcept is declared!");
  } catch (runtime_error err) {
    cout << err.what() << endl;
  }
}

int main(int argc, char** argv) {
  foo();
  cout << "The process is not terminated by noexcept!" << endl;
  return 0;
}
