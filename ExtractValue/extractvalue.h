#ifndef EXTRACTVALUE_H
#define EXTRACTVALUE_H

#include "rapidxml.hpp"
#include "rapidxml_print.hpp"
#include <string>

class ExtractValue {
 public:
  explicit ExtractValue(std::string a);
  int chop(std::string b, std::string arr[]);
  int intreturn(std::string source);
  float floatreturn(std::string source);
  double doublereturn(std::string source);
  std::string stringreturn(std::string source);
  std::string docstring;
};

#endif
