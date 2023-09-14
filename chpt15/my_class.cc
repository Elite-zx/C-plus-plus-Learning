#include <iostream>
using namespace std;

class Mac {
 public:
  // default constructor
  explicit Mac(size_t p_width = 0, size_t p_length = 0, size_t p_resolution = 0,
               size_t p_SN = 0, string* p_cpu_model = nullptr)
      : width(p_width),
        length(p_length),
        resolution(p_resolution),
        SN(p_SN),
        cpu_model(p_cpu_model) {}

  // copy constructor
  Mac(Mac& rhs)
      : width(rhs.width),
        length(rhs.length),
        resolution(rhs.resolution),
        SN(rhs.SN) {
    // like a value rather than a pointer
    cpu_model = new string(*rhs.cpu_model);
  }

  // move constructor
  Mac(Mac&& rhs)
      : width(rhs.width),
        length(rhs.length),
        resolution(rhs.resolution),
        SN(rhs.SN) {
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

  Mac& operator++() {
    ++this->SN;
    return *this;
  }

  Mac operator++(int) {
    Mac ret_value = *this;
    ++this->SN;
    return ret_value;
  }

  virtual ~Mac() {}

 private:
  size_t width;
  size_t length;
  size_t resolution;
  size_t SN;
  string* cpu_model;
  friend ostream& operator<<(ostream& os, const Mac& a_mac);
};

ostream& operator<<(ostream& os, const Mac& a_mac) {
  os << a_mac.width << " " << a_mac.length << " " << a_mac.resolution << " "
     << a_mac.cpu_model;  // no newlines
  return os;
};

class iMac final : public Mac {
 public:
  using Mac::Mac;  // inherit Mac's constructor
  iMac(iMac& rhs) : Mac(rhs) {}

  // rhs here is a lvalue rather than a rvalue
  iMac(iMac&& rhs) : Mac(std::move(rhs)) {}
};
