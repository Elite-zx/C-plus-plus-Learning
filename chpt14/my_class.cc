#include <iostream>
using namespace std;

class Mac {
 public:
  // default constructor
  explicit Mac(size_t p_width = 0, size_t p_length = 0, size_t p_resolution = 0,
               string* p_cpu_model = nullptr)
      : width(p_width),
        length(p_length),
        resolution(p_resolution),
        cpu_model(p_cpu_model) {}

  // copy constructor
  Mac(Mac& rhs)
      : width(rhs.width), length(rhs.length), resolution(rhs.resolution) {
    // like a value rather than a pointer
    cpu_model = new string(*rhs.cpu_model);
  }

  // move constructor
  Mac(Mac&& rhs)
      : width(rhs.width), length(rhs.length), resolution(rhs.resolution) {
    // like a value rather than a pointer
    cpu_model = rhs.cpu_model;
    rhs.cpu_model = nullptr;
  }

  // copy assignment operator
  Mac& operator=(Mac& rhs) & {
    auto tmp = new string(*rhs.cpu_model);
    delete cpu_model;
    cpu_model = tmp;

    width = rhs.width;
    length = rhs.length;
    resolution = rhs.resolution;
    return *this;
  }

 private:
  size_t width;
  size_t length;
  size_t resolution;
  string* cpu_model;
  friend ostream& operator<<(ostream& os, const Mac& a_mac);
};

ostream& operator<<(ostream& os, const Mac& a_mac) {
  os << a_mac.width << " " << a_mac.length << " " << a_mac.resolution << " "
     << a_mac.cpu_model;  // no newlines
  return os;
}

