// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_print_attribute_HashDocAttributeSet__
#define __javax_print_attribute_HashDocAttributeSet__

#pragma interface

#include <javax/print/attribute/HashAttributeSet.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace print
    {
      namespace attribute
      {
        class HashDocAttributeSet;
        class DocAttributeSet;
        class DocAttribute;
      }
    }
  }
}

class javax::print::attribute::HashDocAttributeSet : public ::javax::print::attribute::HashAttributeSet
{
public:
  HashDocAttributeSet ();
  HashDocAttributeSet (::javax::print::attribute::DocAttribute *);
  HashDocAttributeSet (JArray< ::javax::print::attribute::DocAttribute *> *);
  HashDocAttributeSet (::javax::print::attribute::DocAttributeSet *);
private:
  static const jlong serialVersionUID = -1128534486061432528LL;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_print_attribute_HashDocAttributeSet__ */