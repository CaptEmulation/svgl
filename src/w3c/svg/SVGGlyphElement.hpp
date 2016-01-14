#ifndef __svg_SVGGlyphElement__
#define __svg_SVGGlyphElement__

// generated by genFromIdl.py
	class xmlostream;

namespace svg {
}

namespace svgl {
	class AnimateAdapter;
}

#include <w3c/svg/SVGElement.hpp>
#include <w3c/svg/SVGStylable.hpp>
#include <w3c/svg/String.hpp>

namespace svg {
            extern unicode::String * SVGGlyphElement_element_string;
}

namespace svg {
	class SVGGlyphElement :
		public SVGElement,
		public SVGStylable {
	public:
	public:
		virtual int parse_attributes(const String&, const String&);
		virtual void print_attributes(xmlostream&);
	public:
		virtual svgl::AnimateAdapter* getAttributeByName(const String&);

	public:
		virtual ~SVGGlyphElement();
		virtual const String getDtdElement() const { return SVGGlyphElement_element_string; }
		SVGGlyphElement(dom::Document* doc) : SVGElement(doc, SVGGlyphElement_element_string) {}
	};
}


#endif // __svg_SVGGlyphElement__