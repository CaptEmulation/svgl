#ifndef __svg_SVGTRefElement__
#define __svg_SVGTRefElement__

// generated by genFromIdl.py
	class xmlostream;

namespace svg {
}

namespace svgl {
	class AnimateAdapter;
	class Context;
	class GLInfo;
	class TextInfo;
}

namespace dom {
	class Text;
}

#include <w3c/svg/SVGTextPositioningElement.hpp>
#include <w3c/svg/SVGURIReference.hpp>
#include <w3c/svg/String.hpp>

namespace svg {
            extern unicode::String * SVGTRefElement_element_string;
}

namespace svg {
	class SVGTRefElement :
		public SVGTextPositioningElement,
		public SVGURIReference {
	public:

    public:
		virtual void glTextTraverse(svgl::Context*, svgl::GLInfo*, svgl::TextInfo*) ;
		virtual void glTextTraversePCDATA(svgl::Context*, svgl::GLInfo*, svgl::TextInfo*, dom::Text*) ;

	public:
		virtual int parse_attributes(const String&, const String&);
		virtual void print_attributes(xmlostream&);
	public:
		virtual svgl::AnimateAdapter* getAttributeByName(const String&);

	public:
		virtual ~SVGTRefElement();
		virtual const String getDtdElement() const { return SVGTRefElement_element_string; }
		SVGTRefElement(dom::Document* doc) : SVGTextPositioningElement(doc, SVGTRefElement_element_string) {}
	};
}


#endif // __svg_SVGTRefElement__