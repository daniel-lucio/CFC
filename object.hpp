#ifndef _CFC
#define _CFC
namespace CFC {
  class Object{
  public:
    Object();
    virtual ~Object();
    static long unsigned int Instances(){ return instances;}
    virtual bool operator==(const String &s) const = 0;
  protected:
  private:
    static long unsigned int instances;
  };
}
#endif
