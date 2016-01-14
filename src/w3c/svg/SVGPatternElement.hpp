#ifndef __svg_SVGPatternElement__
#define __svg_SVGPatternElement__

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
#include <w3c/svg/SVGURIReference.hpp>
#include <w3c/svg/SVGTests.hpp>
#include <w3c/svg/SVGLangSpace.hpp>
#include <w3c/svg/SVGExternalResourcesRequired.hpp>
#include <w3c/svg/SVGStylable.hpp>
#include <w3c/svg/SVGFitToViewBox.hpp>
#include <w3c/svg/SVGUnitTypes.hpp>
#include <w3c/svg/Attribute.hpp>
#include <w3c/svg/SVGAnimatedTransformList.hpp>
#include <w3c/svg/SVGAnimatedLength.hpp>
#include <w3c/svg/String.hpp>

namespace svg {
            extern unicode::String * SVGPatternElement_element_string;
}

namespace svg {
	class SVGPatternElement :
		public SVGElement,
		public SVGURIReference,
		public SVGTests,
		public SVGLangSpace,
		public SVGExternalResourcesRequired,
		public SVGStylable,
		public SVGFitToViewBox,
		public SVGUnitTypes {
	public:
	protected:
		Attribute< Animated<SVG_UNIT_TYPE> > patternUnits;
		Attribute< SVGAnimatedTransformList > patternTransform;
		Attribute< SVGAnimatedLength > x;
		Attribute< SVGAnimatedLength > y;
		Attribute< SVGAnimatedLength > width;
		Attribute< SVGAnimatedLength > height;
	public:
		const Attribute< Animated<SVG_UNIT_TYPE> >& dom_getPatternUnits() const { return patternUnits; }

		const Attribute< SVGAnimatedTransformList >& dom_getPatternTransform() const { return patternTransform; }

		const Attribute< SVGAnimatedLength >& dom_getX() const { return x; }

		const Attribute< SVGAnimatedLength >& dom_getY() const { return y; }

		const Attribute< SVGAnimatedLength >& dom_getWidth() const { return width; }

		const Attribute< SVGAnimatedLength >& dom_getHeight() const { return height; }

	public:
		const SVG_UNIT_TYPE & getPatternUnits() const { return patternUnits.getValue().getAnimatedVal().getValue(); }
		void setPatternUnits(const SVG_UNIT_TYPE& n)  { patternUnits.getValue().getAnimatedVal().setValue(n); patternUnits.getValue().getBaseVal().setValue(n);  setDamaged(true); }

		const SVGTransformList & getPatternTransform() const { return patternTransform.getValue().getAnimatedVal().getValue(); }
		void setPatternTransform(const SVGTransformList& n)  { patternTransform.getValue().getAnimatedVal().setValue(n); patternTransform.getValue().getBaseVal().setValue(n);  setDamaged(true); }

		const SVGLength & getX() const { return x.getValue().getAnimatedVal().getValue(); }
		void setX(const SVGLength& n)  { x.getValue().getAnimatedVal().setValue(n); x.getValue().getBaseVal().setValue(n);  setDamaged(true); }

		const SVGLength & getY() const { return y.getValue().getAnimatedVal().getValue(); }
		void setY(const SVGLength& n)  { y.getValue().getAnimatedVal().setValue(n); y.getValue().getBaseVal().setValue(n);  setDamaged(true); }

		const SVGLength & getWidth() const { return width.getValue().getAnimatedVal().getValue(); }
		void setWidth(const SVGLength& n)  { width.getValue().getAnimatedVal().setValue(n); width.getValue().getBaseVal().setValue(n);  setDamaged(true); }

		const SVGLength & getHeight() const { return height.getValue().getAnimatedVal().getValue(); }
		void setHeight(const SVGLength& n)  { height.getValue().getAnimatedVal().setValue(n); height.getValue().getBaseVal().setValue(n);  setDamaged(true); }


		virtual void glTraverse(svgl::Context*, svgl::GLInfo*)  ;
	public:
		virtual int parse_attributes(const String&, const String&);
		virtual void print_attributes(xmlostream&);
	public:
		virtual svgl::AnimateAdapter* getAttributeByName(const String&);

	public:
		virtual ~SVGPatternElement();
		virtual const String getDtdElement() const { return SVGPatternElement_element_string; }
		SVGPatternElement(dom::Document* doc) : SVGElement(doc, SVGPatternElement_element_string) {}
	};
}


#endif // __svg_SVGPatternElement__