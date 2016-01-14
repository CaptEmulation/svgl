#ifndef __svg_SVGClipPathElement__
#define __svg_SVGClipPathElement__

// generated by genFromIdl.py
	class xmlostream;

namespace svg {
}

namespace svgl {
	class AnimateAdapter;
	class Context;
	class GLInfo;
}

#include <w3c/svg/SVGElement.hpp>
#include <w3c/svg/SVGTests.hpp>
#include <w3c/svg/SVGLangSpace.hpp>
#include <w3c/svg/SVGExternalResourcesRequired.hpp>
#include <w3c/svg/SVGStylable.hpp>
#include <w3c/svg/SVGTransformable.hpp>
#include <w3c/svg/SVGUnitTypes.hpp>
#include <w3c/svg/Attribute.hpp>
#include <w3c/svg/String.hpp>

namespace svg {
            extern unicode::String * SVGClipPathElement_element_string;
}

namespace svg {
	class SVGClipPathElement :
		public SVGElement,
		public SVGTests,
		public SVGLangSpace,
		public SVGExternalResourcesRequired,
		public SVGStylable,
		public SVGTransformable,
		public SVGUnitTypes {
	public:
	protected:
		Attribute< Animated<SVG_UNIT_TYPE> > clipPathUnits;
	public:
		const Attribute< Animated<SVG_UNIT_TYPE> >& dom_getClipPathUnits() const { return clipPathUnits; }

	public:
		const SVG_UNIT_TYPE & getClipPathUnits() const { return clipPathUnits.getValue().getAnimatedVal().getValue(); }
		void setClipPathUnits(const SVG_UNIT_TYPE& n)  { clipPathUnits.getValue().getAnimatedVal().setValue(n); clipPathUnits.getValue().getBaseVal().setValue(n);  setDamaged(true); }


		virtual void glTraverse(svgl::Context*, svgl::GLInfo*)  ;

		virtual void pickTraverse(svgl::Context*, svgl::GLInfo*)  ;

		virtual void glPreTraverse(svgl::Context*, svgl::GLInfo*)  ;
		virtual void glPostTraverse(svgl::Context*, svgl::GLInfo*)  ;
	public:
		virtual int parse_attributes(const String&, const String&);
		virtual void print_attributes(xmlostream&);
	public:
		virtual svgl::AnimateAdapter* getAttributeByName(const String&);

	public:
		virtual ~SVGClipPathElement();
		virtual const String getDtdElement() const { return SVGClipPathElement_element_string; }
		SVGClipPathElement(dom::Document* doc) : SVGElement(doc, SVGClipPathElement_element_string) {}
	};
}


#endif // __svg_SVGClipPathElement__
