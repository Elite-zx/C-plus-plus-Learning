#include <iostream>
using namespace std;

int main(int argc, char* arg[]) {
  constexpr int len = 10;
  int arr[len] ={};
  int* p = arr + 2;
  cout << p[-2] << endl; // print 0
}
