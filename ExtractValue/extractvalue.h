#ifndef EXTRACTVALUE_H
#define EXTRACTVALUE_H

#include "rapidxml.hpp"
#include "rapidxml_print.hpp"
#include <string>

class ExtractValue {
 public:
  explicit ExtractValue(char* a);
  int chop(std::string b, std::string arr[]);
  int intreturn(std::string source);
  float floatreturn(std::string source);
  double doublereturn(std::string source);
  std::string stringreturn(std::string source);
  rapidxml::xml_document<> doc;
  rapidxml::xml_node<> *snode;

};

#endif
