#include <array>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  array<int, 5> a1{1, 2, 3, 4, 5};  // direct list initialization
  a1 = {1, 2, 3};
}
