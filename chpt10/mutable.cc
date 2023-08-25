#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  int v1;
  auto f1 = [=] { return ++v1; };

  auto f2 = [=]() mutable { return ++v1; };
}
