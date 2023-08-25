#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
  int arr1[42];  // OK

  int dimension1 = 42;
  int arr2[dimension1];

  constexpr int dimension2 = 42;
  int arr3[dimension2];

  return 0;
}
