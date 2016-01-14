#ifndef __svg_SVGCursorElement__
#define __svg_SVGCursorElement__

// generated by genFromIdl.py
	class xmlostream;

namespace svg {
}

namespace svgl {
	class AnimateAdapter;
}

#include <w3c/svg/SVGElement.hpp>
#include <w3c/svg/SVGURIReference.hpp>
#include <w3c/svg/SVGTests.hpp>
#include <w3c/svg/SVGExternalResourcesRequired.hpp>
#include <w3c/svg/Attribute.hpp>
#include <w3c/svg/SVGAnimatedLength.hpp>
#include <w3c/svg/String.hpp>

namespace svg {
            extern unicode::String * SVGCursorElement_element_string;
}

namespace svg {
	class SVGCursorElement :
		public SVGElement,
		public SVGURIReference,
		public SVGTests,
		public SVGExternalResourcesRequired {
	public:
	protected:
		Attribute< SVGAnimatedLength > x;
		Attribute< SVGAnimatedLength > y;
	public:
		const Attribute< SVGAnimatedLength >& dom_getX() const { return x; }

		const Attribute< SVGAnimatedLength >& dom_getY() const { return y; }

	public:
		const SVGLength & getX() const { return x.getValue().getAnimatedVal().getValue(); }
		void setX(const SVGLength& n)  { x.getValue().getAnimatedVal().setValue(n); x.getValue().getBaseVal().setValue(n);  setDamaged(true); }

		const SVGLength & getY() const { return y.getValue().getAnimatedVal().getValue(); }
		void setY(const SVGLength& n)  { y.getValue().getAnimatedVal().setValue(n); y.getValue().getBaseVal().setValue(n);  setDamaged(true); }

	public:
		virtual int parse_attributes(const String&, const String&);
		virtual void print_attributes(xmlostream&);
	public:
		virtual svgl::AnimateAdapter* getAttributeByName(const String&);

	public:
		virtual ~SVGCursorElement();
		virtual const String getDtdElement() const { return SVGCursorElement_element_string; }
		SVGCursorElement(dom::Document* doc) : SVGElement(doc, SVGCursorElement_element_string) {}
	};
}


#endif // __svg_SVGCursorElement__
