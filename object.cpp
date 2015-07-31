#include "object.hpp"

using namespace CFC;

long unsigned int Object::instances = 0;

Object::Object(){
  instances++;
}

Object::~Object(){
  instances--;
}
