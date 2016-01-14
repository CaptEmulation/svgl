/*
 * $Id$
 *
Copyright (c) 2001 Stephane Conversy, Jean-Daniel Fekete and Ecole des
Mines de Nantes.
All rights reserved.

This software is proprietary information of Stephane Conversy,
Jean-Daniel Fekete and Ecole des Mines de Nantes.  You shall use it
only in accordance with the terms of the license agreement you
accepted when downloading this software.  The license is available in
the file license.txt and at the following URL:
http://www.emn.fr/info/image/Themes/Indigo/licence.html

 */
#ifndef __svg_Animated__
#define __svg_Animated__

#include <ostream>
#include <w3c/svg/Attribute.hpp>

namespace svg {

  template <typename X>
  class Animated {
  public:
    Attribute<X>& getBaseVal() { return baseVal; };
    Attribute<X>& getAnimatedVal() { return animatedVal; }

    const Attribute<X>& getBaseVal() const { return baseVal; };
    const Attribute<X>& getAnimatedVal() const { return animatedVal; }

  public:
    operator X() { return getBaseVal(); }
    template <class Y> friend std::ostream& operator << (std::ostream& out, const svg::Attribute<Y>& a);
    template <class Y> friend std::ostream& operator << (std::ostream& out, const svg::Animated<Y>& a);
  private:
    Attribute<X> baseVal;
    Attribute<X> animatedVal;
  };

}

#endif // __svg_Animated__
