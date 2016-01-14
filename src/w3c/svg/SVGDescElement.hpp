#ifndef __svg_SVGDescElement__
#define __svg_SVGDescElement__

// generated by genFromIdl.py
	class xmlostream;

namespace svg {
}

namespace unicode {
	class String;
}

namespace svgl {
	class AnimateAdapter;
}

#include <w3c/svg/SVGElement.hpp>
#include <w3c/svg/SVGLangSpace.hpp>
#include <w3c/svg/SVGStylable.hpp>
#include <w3c/svg/String.hpp>

namespace svg {
            extern unicode::String * SVGDescElement_element_string;
}

namespace svg {
	class SVGDescElement :
		public SVGElement,
		public SVGLangSpace,
		public SVGStylable {
	public:

	public:
		void setText(const char*);
		String getText();
	public:
		virtual int parse_attributes(const String&, const String&);
		virtual void print_attributes(xmlostream&);
	public:
		virtual svgl::AnimateAdapter* getAttributeByName(const String&);

	public:
		virtual ~SVGDescElement();
		virtual const String getDtdElement() const { return SVGDescElement_element_string; }
		SVGDescElement(dom::Document* doc) : SVGElement(doc, SVGDescElement_element_string) {}
	};
}


#endif // __svg_SVGDescElement__