#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include "extractvalue.h"
#include <sstream>

using namespace std;
using namespace rapidxml;

ExtractValue::ExtractValue(std::string a) {
  docstring = a;
}

int ExtractValue::chop(std::string b, std::string arr[]) {
  int m = 0;
  while (b[m] != '\0')
    m++;
  string k = "";
  int j = 0;
  for (int i = 0 ; i < m ; i++) {
    if (b[i] == '/') {
      arr[j] = k;
      k = "";
      j++;
    }
    else
      k += b[i];
  }
  arr[j] = k;
  return j+1;
}

int ExtractValue::intreturn(std::string source) {
  ifstream inFile(docstring.c_str(),std::ifstream::in);
  stringstream ss;
  ss << inFile.rdbuf();
  inFile.close();
  string content(ss.str());
  rapidxml::xml_document<> doc;
  doc.parse<0>(&content[0]);
  string sarray[5];
  int len = chop(source,sarray);
  rapidxml::xml_node<> *snode;
  snode = doc.first_node("PID");
  for (int i = 0 ; i < len ; i++) {
    snode = snode->first_node(sarray[i].c_str());
  }
  string pres = snode->value();
  istringstream is(pres);
  int answer;
  is >> answer;
  return answer;
}

double ExtractValue::doublereturn(std::string source) {
  ifstream inFile(docstring.c_str(),std::ifstream::in);
  stringstream ss;
  ss << inFile.rdbuf();
  inFile.close();
  string content(ss.str());
  rapidxml::xml_document<> doc;
  doc.parse<0>(&content[0]);
  string sarray[5];
  int len = chop(source,sarray);
  rapidxml::xml_node<> *snode;
  snode = doc.first_node("PID");
  for (int i = 0 ; i < len ; i++) {
    snode = snode->first_node(sarray[i].c_str());
  }
  string pres = snode->value();
  istringstream is(pres);
  double answer;
  is >> answer;
  return answer;
}

float ExtractValue::floatreturn(std::string source) {
  ifstream inFile(docstring.c_str(),std::ifstream::in);
  stringstream ss;
  ss << inFile.rdbuf();
  inFile.close();
  string content(ss.str());
  rapidxml::xml_document<> doc;
  doc.parse<0>(&content[0]);
  string sarray[5];
  int len = chop(source,sarray);
  rapidxml::xml_node<> *snode;
  snode = doc.first_node("PID");
  for (int i = 0 ; i < len ; i++) {
    snode = snode->first_node(sarray[i].c_str());
  }
  string pres = snode->value();
  istringstream is(pres);
  float answer;
  is >> answer;
  return answer;
}

string ExtractValue::stringreturn(std::string source) {
  ifstream inFile(docstring.c_str(),std::ifstream::in);
  stringstream ss;
  ss << inFile.rdbuf();
  inFile.close();
  string content(ss.str());
  rapidxml::xml_document<> doc;
  doc.parse<0>(&content[0]);
  string sarray[5];
  int len = chop(source,sarray);
  rapidxml::xml_node<> *snode;
  snode = doc.first_node("PID");
  for (int i = 0 ; i < len ; i++)
    snode = snode->first_node(sarray[i].c_str());
  string pres = snode->value();
  return pres;
}
