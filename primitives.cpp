#include "primitives.hpp"

using namespace CFC;
using namespace CFC::Primitives;
long unsigned int CFC::Primitives::String::instances = 0;

String::String():Object(){
  instances++;
}

String::String(String string):Object(){
}

String::String(const char * string):Object(){
}

String::~String(){
  instances--;
}

