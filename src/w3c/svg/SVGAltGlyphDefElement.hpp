#ifndef __svg_SVGAltGlyphDefElement__
#define __svg_SVGAltGlyphDefElement__

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
            extern unicode::String * SVGAltGlyphDefElement_element_string;
}

namespace svg {
	class SVGAltGlyphDefElement :
		public SVGElement {
	public:
	public:
		virtual int parse_attributes(const String&, const String&);
		virtual void print_attributes(xmlostream&);
	public:
		virtual svgl::AnimateAdapter* getAttributeByName(const String&);

	public:
		virtual ~SVGAltGlyphDefElement();
		virtual const String getDtdElement() const { return SVGAltGlyphDefElement_element_string; }
		SVGAltGlyphDefElement(dom::Document* doc) : SVGElement(doc, SVGAltGlyphDefElement_element_string) {}
	};
}


#endif // __svg_SVGAltGlyphDefElement__