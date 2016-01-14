#ifndef __svg_SVGFontFaceNameElement__
#define __svg_SVGFontFaceNameElement__

// generated by genFromIdl.py
	class xmlostream;

namespace svg {
}

namespace svgl {
	class AnimateAdapter;
}

#include <w3c/svg/SVGElement.hpp>
#include <w3c/svg/String.hpp>

namespace svg {
            extern unicode::String * SVGFontFaceNameElement_element_string;
}

namespace svg {
	class SVGFontFaceNameElement :
		public SVGElement {
	public:
	public:
		virtual int parse_attributes(const String&, const String&);
		virtual void print_attributes(xmlostream&);
	public:
		virtual svgl::AnimateAdapter* getAttributeByName(const String&);

	public:
		virtual ~SVGFontFaceNameElement();
		virtual const String getDtdElement() const { return SVGFontFaceNameElement_element_string; }
		SVGFontFaceNameElement(dom::Document* doc) : SVGElement(doc, SVGFontFaceNameElement_element_string) {}
	};
}


#endif // __svg_SVGFontFaceNameElement__
