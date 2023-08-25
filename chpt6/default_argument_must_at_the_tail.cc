#include <iostream>
using namespace std;

void func(int para1, int para2 = 0, int para3 = 0) { return; }

int main(int argc, char** argv) {
  func(1, , 3);

  func(1, 2);
}
