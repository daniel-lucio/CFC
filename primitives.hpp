#ifndef _CFC_PRIMITIVES
#define _CFC_PRIMITIVES

#include "object.hpp"
#include "primitives.hpp"
#include <string>

namespace CFC{
  namespace Primitives {
    class String: public Object, std::string{
    public:
      String();
      virtual ~String();
      static long unsigned int Instances(){ return instances; }
    protected:
    private:
      static long unsigned int instances;
    };
  }
}
#endif
