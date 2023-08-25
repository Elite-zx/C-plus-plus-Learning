#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
  int a = 1, b = 2, c = 3;
  constexpr int dimension = 3;
  int& arr[dimension] = {a, b, c}; // error 
}
