#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  string my_file("my_file.txt");
  fstream obj(my_file, std::fstream::app);
  string store;
  obj >> store;
  cout << store << endl;
  obj << '\n' << store;
}
