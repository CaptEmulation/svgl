#ifndef __svg_SVGFEComponentTransferElement__
#define __svg_SVGFEComponentTransferElement__

// generated by genFromIdl.py
	class xmlostream;

namespace svg {
}

namespace svgl {
	class AnimateAdapter;
}

#include <w3c/svg/SVGElement.hpp>
#include <w3c/svg/SVGFilterPrimitiveStandardAttributes.hpp>
#include <w3c/svg/Attribute.hpp>
#include <w3c/svg/SVGAnimatedString.hpp>
#include <w3c/svg/String.hpp>

namespace svg {
            extern unicode::String * SVGFEComponentTransferElement_element_string;
}

namespace svg {
	class SVGFEComponentTransferElement :
		public SVGElement,
		public SVGFilterPrimitiveStandardAttributes {
	public:
	protected:
		Attribute< SVGAnimatedString > in1;
	public:
		const Attribute< SVGAnimatedString >& dom_getIn1() const { return in1; }

	public:
		const SVGString & getIn1() const { return in1.getValue().getAnimatedVal().getValue(); }
		void setIn1(const SVGString& n)  { in1.getValue().getAnimatedVal().setValue(n); in1.getValue().getBaseVal().setValue(n);  setDamaged(true); }

	public:
		virtual int parse_attributes(const String&, const String&);
		virtual void print_attributes(xmlostream&);
	public:
		virtual svgl::AnimateAdapter* getAttributeByName(const String&);

	public:
		virtual ~SVGFEComponentTransferElement();
		virtual const String getDtdElement() const { return SVGFEComponentTransferElement_element_string; }
		SVGFEComponentTransferElement(dom::Document* doc) : SVGElement(doc, SVGFEComponentTransferElement_element_string) {}
	};
}


#endif // __svg_SVGFEComponentTransferElement__