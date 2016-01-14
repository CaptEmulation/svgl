#ifndef __svg_SVGFEFuncGElement__
#define __svg_SVGFEFuncGElement__

// generated by genFromIdl.py
	class xmlostream;

namespace svg {
}

namespace svgl {
	class AnimateAdapter;
}

#include <w3c/svg/SVGComponentTransferFunctionElement.hpp>
#include <w3c/svg/String.hpp>

namespace svg {
            extern unicode::String * SVGFEFuncGElement_element_string;
}

namespace svg {
	class SVGFEFuncGElement :
		public SVGComponentTransferFunctionElement {
	public:
	public:
		virtual int parse_attributes(const String&, const String&);
		virtual void print_attributes(xmlostream&);
	public:
		virtual svgl::AnimateAdapter* getAttributeByName(const String&);

	public:
		virtual ~SVGFEFuncGElement();
		virtual const String getDtdElement() const { return SVGFEFuncGElement_element_string; }
		SVGFEFuncGElement(dom::Document* doc) : SVGComponentTransferFunctionElement(doc, SVGFEFuncGElement_element_string) {}
	};
}


#endif // __svg_SVGFEFuncGElement__