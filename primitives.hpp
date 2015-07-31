#ifndef _CFC_PRIMITIVES
#define _CFC_PRIMITIVES

#include "object.hpp"
#include "primitives.hpp"
#include <string>
#include <iostream>

namespace CFC{
  namespace Primitives {
    class String: public Object, protected std::string{
      friend ostream &operator<<(ostream &cout, const String &s);
      friend istream &operator>>(istream &cin, String &s);
    public:
      String();
      String(String string);
      String(const char * string = "");
      virtual ~String();
      static long unsigned int Instances(){ return instances; }

      size_t length();
      size_t size();

      const String &operator=(const String &s);
      const String &operator=(const std::string &s);
      const String &operator=(const char s);
      const String &operator=(const char *s);
      
      const String &operator+(const String &s);
      const String &operator+(const std::string &s);
      const String &operator+(const char s);
      const String &operator+(const char *s);

      const String &operator+=(const String &s);
      const String &operator+=(const std::string &s);
      const String &operator+=(const char s);
      const String &operator+=(const char *s);
      
      bool operator!() const;

      bool operator==(const String &s) const;
      bool operator==(const std::string &s) const;
      bool operator==(const char s) const;
      bool operator==(const char *s) const;

      bool operator<(const String &s) const;
      bool operator<(const std::string &s) const;
      bool operator<(const char s) const;
      bool operator<(const char *s) const;

      bool operator!=(const String &s) const;
      bool operator!=(const std::string &s) const;
      bool operator!=(const char s) const;
      bool operator!=(const char *s) const;

      bool operator>(const String &s) const;
      bool operator>(const std::string &s) const;
      bool operator>(const char s) const;
      bool operator>(const char *s) const;

      bool operator>=(const String &s) const;
      bool operator>=(const std::string &s) const;
      bool operator>=(const char s) const;
      bool operator>=(const char *s) const;

      bool operator<=(const String &s) const;
      bool operator<=(const std::string &s) const;
      bool operator<=(const char s) const;
      bool operator<=(const char *s) const;

      char &operator[](int i);
      const char &operator[](int i) const;
      String &operator() (int i, int j);
      
    protected:
    private:
      static long unsigned int instances;
      std::string string;
    };
  }
}
#endif
