#ifndef _CFC
#define _CFC

#include <assert.h>

namespace CFC {
  class Object{
  public:
    Object();
    virtual ~Object();
    static long unsigned int Instances(){ return instances;}
  protected:
  private:
    static long unsigned int instances;
  };
}
#endif
