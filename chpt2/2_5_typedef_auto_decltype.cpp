#include <iostream>
using namespace std;

const double i_val = 4.25;
int main(int argc, char *argv[]) {
  /* typedef in C++11 */
  using db = double;
  constexpr const db *pd = &i_val;
  cout << "const pointer point to const object: " << *pd << endl;

  /*auto*/
  const int j_val = 6;
  auto a = j_val;  // remove const attribute
  cout << "auto omit top const attribute: " << a << endl;

  /*decltype*/
  constexpr db i_val = 4.25;
  decltype(i_val) k_val = 5.24;
  decltype(j_val) l_val = 8;
  cout << "fetch data type by decltype(declare type), size: " << sizeof(k_val)
       << " size: " << sizeof(l_val) << endl;
}
