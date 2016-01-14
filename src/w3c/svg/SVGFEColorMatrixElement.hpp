#ifndef __svg_SVGFEColorMatrixElement__
#define __svg_SVGFEColorMatrixElement__

// generated by genFromIdl.py
	class xmlostream;

namespace svg {
	class SVGElement;
}

namespace svgl {
	class AnimateAdapter;
	class Context;
	class GLInfo;
	class FilterContext;
}

#include <w3c/svg/SVGElement.hpp>
#include <w3c/svg/SVGFilterPrimitiveStandardAttributes.hpp>
#include <w3c/svg/Attribute.hpp>
#include <w3c/svg/SVGAnimatedString.hpp>
#include <w3c/svg/SVGAnimatedNumberList.hpp>
#include <w3c/svg/String.hpp>

namespace svg {
            extern unicode::String * SVGFEColorMatrixElement_element_string;
}

namespace svg {
	class SVGFEColorMatrixElement :
		public SVGElement,
		public SVGFilterPrimitiveStandardAttributes {
	public:

		enum SVG_FECOLORMATRIX_TYPE {
			SVG_FECOLORMATRIX_TYPE_UNKNOWN = 0,
			SVG_FECOLORMATRIX_TYPE_MATRIX = 1,
			SVG_FECOLORMATRIX_TYPE_SATURATE = 2,
			SVG_FECOLORMATRIX_TYPE_HUEROTATE = 3,
			SVG_FECOLORMATRIX_TYPE_LUMINANCETOALPHA = 4
		};

	protected:
		Attribute< SVGAnimatedString > in1;
		Attribute< Animated<SVG_FECOLORMATRIX_TYPE> > type;
		Attribute< SVGAnimatedNumberList > values;
	public:
		const Attribute< SVGAnimatedString >& dom_getIn1() const { return in1; }

		const Attribute< Animated<SVG_FECOLORMATRIX_TYPE> >& dom_getType() const { return type; }

		const Attribute< SVGAnimatedNumberList >& dom_getValues() const { return values; }

	public:
		const SVGString & getIn1() const { return in1.getValue().getAnimatedVal().getValue(); }
		void setIn1(const SVGString& n)  { in1.getValue().getAnimatedVal().setValue(n); in1.getValue().getBaseVal().setValue(n);  setDamaged(true); }

		const SVG_FECOLORMATRIX_TYPE & getType() const { return type.getValue().getAnimatedVal().getValue(); }
		void setType(const SVG_FECOLORMATRIX_TYPE& n)  { type.getValue().getAnimatedVal().setValue(n); type.getValue().getBaseVal().setValue(n);  setDamaged(true); }

		const SVGNumberList & getValues() const { return values.getValue().getAnimatedVal().getValue(); }
		void setValues(const SVGNumberList& n)  { values.getValue().getAnimatedVal().setValue(n); values.getValue().getBaseVal().setValue(n);  setDamaged(true); }


		virtual void glPreTraverse(svgl::Context*, svgl::GLInfo*, SVGElement* elem, svgl::FilterContext*)  ;
		virtual void glPostTraverse(svgl::Context*, svgl::GLInfo*, SVGElement* elem, svgl::FilterContext*)  ;
		virtual unicode::String* getOptionalIn1();
		virtual unicode::String* getOptionalIn2();
		virtual unicode::String* getOptionalResult();

	public:
		virtual int parse_attributes(const String&, const String&);
		virtual void print_attributes(xmlostream&);
	public:
		virtual svgl::AnimateAdapter* getAttributeByName(const String&);

	public:
		virtual ~SVGFEColorMatrixElement();
		virtual const String getDtdElement() const { return SVGFEColorMatrixElement_element_string; }
		SVGFEColorMatrixElement(dom::Document* doc) : SVGElement(doc, SVGFEColorMatrixElement_element_string) {}
	};
}


#endif // __svg_SVGFEColorMatrixElement__
