#include <iostream>

void foo(int arr[])
{
  std::cout<<sizeof(arr)<<std::endl;
  return;
}

int main(int argc, char* argv[])
{
  int arr[32];
  foo(arr);
  return 0;
}


