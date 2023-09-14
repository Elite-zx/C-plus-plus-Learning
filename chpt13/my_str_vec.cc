#include "my_str_vec.h"

void StrVec::reallocate() {
  // handle the situation that capacity is equal to 0
  auto new_capacity = capacity() ? capacity() * 2 : 1;
  auto newdates = alloc.allocate(new_capacity);
  auto dest = newdates;
  auto src = elements;
  for (size_t i = 0; i < size(); ++i) alloc.construct(dest++, move(*src++));
  free();
  elements = newdates;
  first_free = src;
  cap = elements + new_capacity;
}

void StrVec::free() {
  if (elements) {
    for (auto p = first_free; p != elements;) alloc.destroy(--p);
    alloc.deallocate(elements, cap - elements);
  }
}

pair<string*, string*> StrVec::alloc_n_copy(const string* b, const string* e) {
  auto data = alloc.allocate(e - b);
  return {data, uninitialized_copy(b, e, data)};
}

StrVec& StrVec::operator=(const StrVec& rhs) {
  auto tmp = alloc_n_copy(rhs.elements, rhs.first_free);
  free();
  elements = tmp.first;
  first_free = cap = tmp.second;
  return *this;
}

StrVec::StrVec(const StrVec& rhs) {
  auto tmp = alloc_n_copy(rhs.elements, rhs.first_free);
  elements = tmp.first;
  first_free = cap = tmp.second;
}
