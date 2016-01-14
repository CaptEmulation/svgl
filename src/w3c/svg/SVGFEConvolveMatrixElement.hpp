#ifndef __svg_SVGFEConvolveMatrixElement__
#define __svg_SVGFEConvolveMatrixElement__

// generated by genFromIdl.py
	class xmlostream;

namespace svg {
}

namespace svgl {
	class AnimateAdapter;
}

#include <w3c/svg/SVGElement.hpp>
#include <w3c/svg/SVGFilterPrimitiveStandardAttributes.hpp>
#include <w3c/svg/Attribute.hpp>
#include <w3c/svg/SVGAnimatedInteger.hpp>
#include <w3c/svg/SVGAnimatedNumberList.hpp>
#include <w3c/svg/SVGAnimatedNumber.hpp>
#include <w3c/svg/SVGAnimatedLength.hpp>
#include <w3c/svg/SVGAnimatedBoolean.hpp>
#include <w3c/svg/String.hpp>

namespace svg {
            extern unicode::String * SVGFEConvolveMatrixElement_element_string;
}

namespace svg {
	class SVGFEConvolveMatrixElement :
		public SVGElement,
		public SVGFilterPrimitiveStandardAttributes {
	public:

		enum SVG_EDGEMODE {
			SVG_EDGEMODE_UNKNOWN = 0,
			SVG_EDGEMODE_DUPLICATE = 1,
			SVG_EDGEMODE_WRAP = 2,
			SVG_EDGEMODE_NONE = 3
		};

	protected:
		Attribute< SVGAnimatedInteger > orderX;
		Attribute< SVGAnimatedInteger > orderY;
		Attribute< SVGAnimatedNumberList > kernelMatrix;
		Attribute< SVGAnimatedNumber > divisor;
		Attribute< SVGAnimatedNumber > bias;
		Attribute< SVGAnimatedInteger > targetX;
		Attribute< SVGAnimatedInteger > targetY;
		Attribute< Animated<SVG_EDGEMODE> > edgeMode;
		Attribute< SVGAnimatedLength > kernelUnitLengthX;
		Attribute< SVGAnimatedLength > kernelUnitLengthY;
		Attribute< SVGAnimatedBoolean > preserveAlpha;
	public:
		const Attribute< SVGAnimatedInteger >& dom_getOrderX() const { return orderX; }

		const Attribute< SVGAnimatedInteger >& dom_getOrderY() const { return orderY; }

		const Attribute< SVGAnimatedNumberList >& dom_getKernelMatrix() const { return kernelMatrix; }

		const Attribute< SVGAnimatedNumber >& dom_getDivisor() const { return divisor; }

		const Attribute< SVGAnimatedNumber >& dom_getBias() const { return bias; }

		const Attribute< SVGAnimatedInteger >& dom_getTargetX() const { return targetX; }

		const Attribute< SVGAnimatedInteger >& dom_getTargetY() const { return targetY; }

		const Attribute< Animated<SVG_EDGEMODE> >& dom_getEdgeMode() const { return edgeMode; }

		const Attribute< SVGAnimatedLength >& dom_getKernelUnitLengthX() const { return kernelUnitLengthX; }

		const Attribute< SVGAnimatedLength >& dom_getKernelUnitLengthY() const { return kernelUnitLengthY; }

		const Attribute< SVGAnimatedBoolean >& dom_getPreserveAlpha() const { return preserveAlpha; }

	public:
		const SVGInteger & getOrderX() const { return orderX.getValue().getAnimatedVal().getValue(); }
		void setOrderX(const SVGInteger& n)  { orderX.getValue().getAnimatedVal().setValue(n); orderX.getValue().getBaseVal().setValue(n);  setDamaged(true); }

		const SVGInteger & getOrderY() const { return orderY.getValue().getAnimatedVal().getValue(); }
		void setOrderY(const SVGInteger& n)  { orderY.getValue().getAnimatedVal().setValue(n); orderY.getValue().getBaseVal().setValue(n);  setDamaged(true); }

		const SVGNumberList & getKernelMatrix() const { return kernelMatrix.getValue().getAnimatedVal().getValue(); }
		void setKernelMatrix(const SVGNumberList& n)  { kernelMatrix.getValue().getAnimatedVal().setValue(n); kernelMatrix.getValue().getBaseVal().setValue(n);  setDamaged(true); }

		const SVGNumber & getDivisor() const { return divisor.getValue().getAnimatedVal().getValue(); }
		void setDivisor(const SVGNumber& n)  { divisor.getValue().getAnimatedVal().setValue(n); divisor.getValue().getBaseVal().setValue(n);  setDamaged(true); }

		const SVGNumber & getBias() const { return bias.getValue().getAnimatedVal().getValue(); }
		void setBias(const SVGNumber& n)  { bias.getValue().getAnimatedVal().setValue(n); bias.getValue().getBaseVal().setValue(n);  setDamaged(true); }

		const SVGInteger & getTargetX() const { return targetX.getValue().getAnimatedVal().getValue(); }
		void setTargetX(const SVGInteger& n)  { targetX.getValue().getAnimatedVal().setValue(n); targetX.getValue().getBaseVal().setValue(n);  setDamaged(true); }

		const SVGInteger & getTargetY() const { return targetY.getValue().getAnimatedVal().getValue(); }
		void setTargetY(const SVGInteger& n)  { targetY.getValue().getAnimatedVal().setValue(n); targetY.getValue().getBaseVal().setValue(n);  setDamaged(true); }

		const SVG_EDGEMODE & getEdgeMode() const { return edgeMode.getValue().getAnimatedVal().getValue(); }
		void setEdgeMode(const SVG_EDGEMODE& n)  { edgeMode.getValue().getAnimatedVal().setValue(n); edgeMode.getValue().getBaseVal().setValue(n);  setDamaged(true); }

		const SVGLength & getKernelUnitLengthX() const { return kernelUnitLengthX.getValue().getAnimatedVal().getValue(); }
		void setKernelUnitLengthX(const SVGLength& n)  { kernelUnitLengthX.getValue().getAnimatedVal().setValue(n); kernelUnitLengthX.getValue().getBaseVal().setValue(n);  setDamaged(true); }

		const SVGLength & getKernelUnitLengthY() const { return kernelUnitLengthY.getValue().getAnimatedVal().getValue(); }
		void setKernelUnitLengthY(const SVGLength& n)  { kernelUnitLengthY.getValue().getAnimatedVal().setValue(n); kernelUnitLengthY.getValue().getBaseVal().setValue(n);  setDamaged(true); }

		const SVGBoolean & getPreserveAlpha() const { return preserveAlpha.getValue().getAnimatedVal().getValue(); }
		void setPreserveAlpha(const SVGBoolean& n)  { preserveAlpha.getValue().getAnimatedVal().setValue(n); preserveAlpha.getValue().getBaseVal().setValue(n);  setDamaged(true); }

	public:
		virtual int parse_attributes(const String&, const String&);
		virtual void print_attributes(xmlostream&);
	public:
		virtual svgl::AnimateAdapter* getAttributeByName(const String&);

	public:
		virtual ~SVGFEConvolveMatrixElement();
		virtual const String getDtdElement() const { return SVGFEConvolveMatrixElement_element_string; }
		SVGFEConvolveMatrixElement(dom::Document* doc) : SVGElement(doc, SVGFEConvolveMatrixElement_element_string) {}
	};
}


#endif // __svg_SVGFEConvolveMatrixElement__