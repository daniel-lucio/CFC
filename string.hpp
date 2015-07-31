#ifndef _CFC_PRIMITIVES
#define _CFC_PRIMITIVES

#include <string>
#include <iostream>
#include <istream>
#include <ostream>
#include <iomanip>
#include <cstring>

#include "object.hpp"

namespace CFC{
  namespace Primitives {
    class String: public Object, protected std::string{
      
      friend std::ostream &operator<<(std::ostream &cout, const String &s);
      friend std::istream &operator>>(std::istream &cin, String &s);

    public:
      String();
      String(const String &s);
      String(const std::string &s);
      String(const char *s);
      virtual ~String();
      static long unsigned int Instances(){ return instances; }

      size_t length();
      size_t size();
      
      operator std::string ();
      operator std::string() const;
      operator char();
      operator char() const;
      operator char*();
      operator char*() const;
      
      const String &operator=(const String &s);      
      const String &operator+(const String &s);
      const String &operator+=(const String &s);
      bool operator!() const;
      bool operator==(const String &s) const;
      bool operator!=(const String &s) const;
      bool operator<(const String &s) const;
      bool operator>(const String &s) const;
      bool operator>=(const String &s) const;
      bool operator<=(const String &s) const;
      char &operator[](int i);

      std::string &_get_data();
      const std::string &_get_data() const;
      
    protected:
    private:
      static long unsigned int instances;
      std::string _data;
    };
  }
}
#endif
