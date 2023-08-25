#include <iostream>
using namespace std;

void func(const int arr1[10]) { return; }
void func_reference(int (&arr1)[10]) { return; }

int main(int argc, char* argv[]) {
  constexpr int dimension1 = 5;
  constexpr int dimension2 = 10;
  int arr1[dimension1];
  int arr2[dimension2];
  func(arr1);
  func_reference(arr1);

  func_reference(arr2);
  return 0;
}

