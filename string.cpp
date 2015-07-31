#include "object.hpp"
#include "string.hpp"

using namespace CFC;
using namespace CFC::Primitives;
long unsigned int CFC::Primitives::String::instances = 0;

std::ostream &operator<<(std::ostream &cout, const String &s){
  cout << s._get_data();
  return cout;
}
      
std::istream &operator>>(std::istream &cin, String &s){
  cin >> s._get_data();
  return cin;
}
      
String::String():Object(){
  instances++;
}

String::String(const String &s):Object(){
  _data = s._data;
  instances++;
}

String::String(const std::string &s):Object(){
  _data = s;
  instances++;
}

String::String(const char *s):Object(){
  _data = *s;
  instances++;
}

String::~String(){
  instances--;
}

size_t String::length(){
  return _data.length();
}
size_t String::size(){
  return _data.size();
}

String::operator std::string(){
  std::string s;
  s = _get_data();
  return s;
}

String::operator std::string() const{
  std::string s;
  s = _get_data();
  return s;
}

String::operator char(){
  char s;
  s = _get_data()[0];
  return s;
}

String::operator char() const{
  char s;
  s = _data[0];
  return s;
}

String::operator char*(){
  char *s;
  s = new char [_data.length()+1];
  assert (s != 0);
  strcpy (s, _data.c_str());
  return s;
}

String::operator char*() const{
  char *s;
  s = new char [_data.length()+1];
  assert (s != 0);
  strcpy (s, _data.c_str());
  return s;
}

const String &String::operator=(const String &s){
  _data = s._data;
  return *this;
}

const String &String::operator+(const String &s){
  String *t = new String;
  t->_data = _data + s._data;
  return *t;
}

const String &String::operator+=(const String &s){
  _data = _data + s._data;
  return *this;
}

bool String::operator!() const{
  return (bool)(_data.size() == 0);
}

bool String::operator==(const String &s) const{
  return (bool) (_data == s._data);
}

bool String::operator!=(const String &s) const{
  return (bool) (_data != s._data);
}

bool String::operator<(const String &s) const{
  return (bool) (_data < s._data);
}

bool String::operator>(const String &s) const{
  return (bool) (_data > s._data);
}

bool String::operator>=(const String &s) const{
    return (bool) (_data >= s._data);
}

bool String::operator<=(const String &s) const{
    return (bool) (_data <= s._data);
}

char &String::operator[](int i){
  char *c = new char [1];
  *c = _data[i];
  return *c;
}

std::string &String::_get_data(){
  return _data;
}

const std::string &String::_get_data() const{
  return _data;
}
