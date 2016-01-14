#ifndef __svg_SVGTitleElement__
#define __svg_SVGTitleElement__

// generated by genFromIdl.py
	class xmlostream;

namespace svg {
}

namespace svgl {
	class AnimateAdapter;
}

#include <w3c/svg/SVGElement.hpp>
#include <w3c/svg/SVGLangSpace.hpp>
#include <w3c/svg/SVGStylable.hpp>
#include <w3c/svg/String.hpp>

namespace svg {
            extern unicode::String * SVGTitleElement_element_string;
}

namespace svg {
	class SVGTitleElement :
		public SVGElement,
		public SVGLangSpace,
		public SVGStylable {
	public:
	public:
		virtual int parse_attributes(const String&, const String&);
		virtual void print_attributes(xmlostream&);
	public:
		virtual svgl::AnimateAdapter* getAttributeByName(const String&);

	public:
		virtual ~SVGTitleElement();
		virtual const String getDtdElement() const { return SVGTitleElement_element_string; }
		SVGTitleElement(dom::Document* doc) : SVGElement(doc, SVGTitleElement_element_string) {}
	};
}


#endif // __svg_SVGTitleElement__
