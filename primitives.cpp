#include "primitives.hpp"

using namespace CFC;
using namespace CFC::Primitives;
long unsigned int CFC::Primitives::String::instances = 0;

ostream &operator<<(ostream &cout, const String &s){
  cout << s.string;
  retourn cout;
}
      
istream &operator>>(istream &cin, String &s){
  cin >> s.string;
  return cin;
}
      
String::String():Object(){
  instances++;
}

String::String(String s):Object(){
  string = s;
  instances++;
}

String::String(const char * s):Object(){
  string = *s;
  instances++;
}

String::~String(){
  instances--;
}

size_t String::length(){
  return string.length();
}
size_t String::size(){
  return string.size();
}
