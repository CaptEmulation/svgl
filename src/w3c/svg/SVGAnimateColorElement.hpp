#ifndef __svg_SVGAnimateColorElement__
#define __svg_SVGAnimateColorElement__

// generated by genFromIdl.py
	class xmlostream;

namespace svg {
}

namespace svgl {
	class AnimateAdapter;
	class AnimationInfo;
}

#include <w3c/svg/SVGAnimationElement.hpp>
#include <w3c/svg/Attribute.hpp>
#include <w3c/svg/DOMString.hpp>
#include <w3c/svg/String.hpp>
#include <svgl/KeyFrame.hpp>
#include <vector>
#include <w3c/css/RGBColor.hpp>
#include <svgl/AnimationManager.hpp>

namespace svg {
            extern unicode::String * SVGAnimateColorElement_element_string;
}

namespace svg {
	class SVGAnimateColorElement :
		public SVGAnimationElement {
	public:
	protected:
		Attribute< DOMString > values;
	public:
		const Attribute< DOMString >& dom_getValues() const { return values; }

	public:
		const DOMString & getValues() const { return values.getValue(); }
		void setValues(const DOMString& n)  { values.setValue(n);  setDamaged(true); }


	protected:
		svgl::AnimateAdapter* _attributeToAnimate;
		typedef svgl::KeyFrame<css::RGBColor> KeyFrame;
		typedef std::vector<KeyFrame> KeyFrames;
		KeyFrames _keyFrames;

	public:
		virtual void animationTraverse(svgl::AnimationInfo*)  ;

	public:
		virtual void tick(svgl::Animation::TickInfo*);
		virtual void reset();
	public:
		virtual int parse_attributes(const String&, const String&);
		virtual void print_attributes(xmlostream&);
	public:
		virtual svgl::AnimateAdapter* getAttributeByName(const String&);

	public:
		virtual ~SVGAnimateColorElement();
		virtual const String getDtdElement() const { return SVGAnimateColorElement_element_string; }
		SVGAnimateColorElement(dom::Document* doc) : SVGAnimationElement(doc, SVGAnimateColorElement_element_string) {}
	};
}


#endif // __svg_SVGAnimateColorElement__