#include "primitives.hpp"

using namespace CFC;
using namespace CFC::Primitives;
long unsigned int CFC::Primitives::String::instances = 0;

String::String():Object(){
  instances++;
}

String::String(String s):Object(){
  string = s;
}

String::String(const char * s):Object(){
  string = *s;
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