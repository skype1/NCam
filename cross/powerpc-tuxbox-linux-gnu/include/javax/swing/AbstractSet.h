// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_AbstractSet__
#define __javax_swing_AbstractSet__

#pragma interface

#include <java/util/AbstractCollection.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      class AbstractSet;
    }
  }
}

class javax::swing::AbstractSet : public ::java::util::AbstractCollection
{
public: // actually package-private
  virtual jboolean contained (JArray< ::java::lang::Object *> *, ::java::lang::Object *);
public:
  virtual jboolean equals (::java::lang::Object *);
  virtual jint hashCode ();
  virtual jboolean removeAll (::java::util::Collection *);
  AbstractSet ();

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_AbstractSet__ */