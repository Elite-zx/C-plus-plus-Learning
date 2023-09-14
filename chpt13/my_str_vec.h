#ifndef STRVEC
#define STRVEC

#include <cstdlib>
#include <exception>
#include <iostream>
#include <memory>

using namespace std;

class StrVec {
 public:
  StrVec() : elements(nullptr), first_free(nullptr), cap(nullptr) {}
  StrVec(const StrVec& rhs);
  StrVec& operator=(const StrVec& rhs);
  ~StrVec();

  void push_back(const string& elem);

  template <typename... Args>
  void emplace_back(Args&&... args);

  size_t size() const { return first_free - elements; };
  size_t capacity() const { return cap - first_free; };
  string* begin() { return elements; }
  string* end() { return first_free; }

 private:
  static allocator<string> alloc;
  void reallocate();
  void chk_n_alloc() {
    if (size() == capacity()) reallocate();
  }
  void free();
  // for copy constructor
  pair<string*, string*> alloc_n_copy(const string* b, const string* e);
  string* elements;    // Point to first elements
  string* first_free;  // Point to the element after the last element
  string* cap;         // Points to the next location in allocated memory
};

#endif
