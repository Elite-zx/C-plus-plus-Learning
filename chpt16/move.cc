#include <type_traits>
using namespace std;
// for the use of typename in the return type and the cast see § 16.1.3 (p. 593)
// remove_reference is covered in § 16.2.3 (p. 605)
template <typename T>
typename remove_reference<T>::type&& move(T&& t) {
  // static_cast covered in § 4.11.3 (p. 163)
  return static_cast<typename remove_reference<T>::type&&>(t);
}
