#ifndef __svg_SVGAnimationElement__
#define __svg_SVGAnimationElement__

// generated by genFromIdl.py
	class xmlostream;

namespace svg {
	class SVGElement;
}

namespace svgl {
	class AnimateAdapter;
	class AnimationInfo;
}

#include <w3c/svg/SVGElement.hpp>
#include <w3c/svg/SVGTests.hpp>
#include <w3c/svg/SVGExternalResourcesRequired.hpp>
#include <w3c/smil/ElementTimeControl.hpp>
#include <w3c/events/EventTarget.hpp>
#include <w3c/svg/Attribute.hpp>
#include <w3c/svg/DOMString.hpp>
#include <w3c/svg/SVGNumberList.hpp>
#include <w3c/svg/String.hpp>
#include <svgl/AnimationManager.hpp>

namespace svg {
	class SVGAnimationElement :
		public SVGElement,
		public SVGTests,
		public SVGExternalResourcesRequired,
		public smil::ElementTimeControl,
		public events::EventTarget {
	public:

		enum SVG_ANIMATION_ATTRIBUTE_TYPE {
			SVG_ANIMATION_ATTRIBUTE_TYPE_UNKNOWN = 0,
			SVG_ANIMATION_ATTRIBUTE_TYPE_CSS = 1,
			SVG_ANIMATION_ATTRIBUTE_TYPE_XML = 2,
			SVG_ANIMATION_ATTRIBUTE_TYPE_AUTO = 3
		};


		enum SVG_ANIMATION_RESTART {
			SVG_ANIMATION_RESTART_UNKNOWN = 0,
			SVG_ANIMATION_RESTART_ALWAYS = 1,
			SVG_ANIMATION_RESTART_NEVER = 2,
			SVG_ANIMATION_RESTART_WHENNOTACTIVE = 3
		};


		enum SVG_ANIMATION_FILL {
			SVG_ANIMATION_FILL_UNKNOWN = 0,
			SVG_ANIMATION_FILL_FREEZE = 1,
			SVG_ANIMATION_FILL_REMOVE = 2
		};

	protected:
		Attribute< SVGElement* > targetElement;
		Attribute< DOMString > attributeName;
		Attribute< SVG_ANIMATION_ATTRIBUTE_TYPE > attributeType;
		Attribute< DOMString > begin;
		Attribute< DOMString > dur;
		Attribute< DOMString > end;
		Attribute< DOMString > min;
		Attribute< DOMString > max;
		Attribute< SVG_ANIMATION_RESTART > restart;
		Attribute< DOMString > repeatCount;
		Attribute< DOMString > repeatDur;
		Attribute< SVG_ANIMATION_FILL > fill;
		Attribute< DOMString > from;
		Attribute< DOMString > to;
		Attribute< DOMString > by;
		Attribute< SVGNumberList > keyTimes;
		Attribute< SVGNumberList > keySplines;
	public:
		const Attribute< SVGElement* >& dom_getTargetElement() const { return targetElement; }

		const Attribute< DOMString >& dom_getAttributeName() const { return attributeName; }

		const Attribute< SVG_ANIMATION_ATTRIBUTE_TYPE >& dom_getAttributeType() const { return attributeType; }

		const Attribute< DOMString >& dom_getBegin() const { return begin; }

		const Attribute< DOMString >& dom_getDur() const { return dur; }

		const Attribute< DOMString >& dom_getEnd() const { return end; }

		const Attribute< DOMString >& dom_getMin() const { return min; }

		const Attribute< DOMString >& dom_getMax() const { return max; }

		const Attribute< SVG_ANIMATION_RESTART >& dom_getRestart() const { return restart; }

		const Attribute< DOMString >& dom_getRepeatCount() const { return repeatCount; }

		const Attribute< DOMString >& dom_getRepeatDur() const { return repeatDur; }

		const Attribute< SVG_ANIMATION_FILL >& dom_getFill() const { return fill; }

		const Attribute< DOMString >& dom_getFrom() const { return from; }

		const Attribute< DOMString >& dom_getTo() const { return to; }

		const Attribute< DOMString >& dom_getBy() const { return by; }

		const Attribute< SVGNumberList >& dom_getKeyTimes() const { return keyTimes; }

		const Attribute< SVGNumberList >& dom_getKeySplines() const { return keySplines; }

	public:
		const SVGElement* getTargetElement() const { return targetElement.getValue(); }
		void setTargetElement(SVGElement* n)  { targetElement.setValue(n);  setDamaged(true); }

		const DOMString & getAttributeName() const { return attributeName.getValue(); }
		void setAttributeName(const DOMString& n)  { attributeName.setValue(n);  setDamaged(true); }

		const SVG_ANIMATION_ATTRIBUTE_TYPE & getAttributeType() const { return attributeType.getValue(); }
		void setAttributeType(const SVG_ANIMATION_ATTRIBUTE_TYPE& n)  { attributeType.setValue(n);  setDamaged(true); }

		const DOMString & getBegin() const { return begin.getValue(); }
		void setBegin(const DOMString& n)  { begin.setValue(n);  setDamaged(true); }

		const DOMString & getDur() const { return dur.getValue(); }
		void setDur(const DOMString& n)  { dur.setValue(n);  setDamaged(true); }

		const DOMString & getEnd() const { return end.getValue(); }
		void setEnd(const DOMString& n)  { end.setValue(n);  setDamaged(true); }

		const DOMString & getMin() const { return min.getValue(); }
		void setMin(const DOMString& n)  { min.setValue(n);  setDamaged(true); }

		const DOMString & getMax() const { return max.getValue(); }
		void setMax(const DOMString& n)  { max.setValue(n);  setDamaged(true); }

		const SVG_ANIMATION_RESTART & getRestart() const { return restart.getValue(); }
		void setRestart(const SVG_ANIMATION_RESTART& n)  { restart.setValue(n);  setDamaged(true); }

		const DOMString & getRepeatCount() const { return repeatCount.getValue(); }
		void setRepeatCount(const DOMString& n)  { repeatCount.setValue(n);  setDamaged(true); }

		const DOMString & getRepeatDur() const { return repeatDur.getValue(); }
		void setRepeatDur(const DOMString& n)  { repeatDur.setValue(n);  setDamaged(true); }

		const SVG_ANIMATION_FILL & getFill() const { return fill.getValue(); }
		void setFill(const SVG_ANIMATION_FILL& n)  { fill.setValue(n);  setDamaged(true); }

		const DOMString & getFrom() const { return from.getValue(); }
		void setFrom(const DOMString& n)  { from.setValue(n);  setDamaged(true); }

		const DOMString & getTo() const { return to.getValue(); }
		void setTo(const DOMString& n)  { to.setValue(n);  setDamaged(true); }

		const DOMString & getBy() const { return by.getValue(); }
		void setBy(const DOMString& n)  { by.setValue(n);  setDamaged(true); }

		const SVGNumberList & getKeyTimes() const { return keyTimes.getValue(); }
		void setKeyTimes(const SVGNumberList& n)  { keyTimes.setValue(n);  setDamaged(true); }

		const SVGNumberList & getKeySplines() const { return keySplines.getValue(); }
		void setKeySplines(const SVGNumberList& n)  { keySplines.setValue(n);  setDamaged(true); }


	protected:
		SVGElement* _elementToAnimate;
float _repeatCount, _repeatCounter;

	public:
		void started(svgl::Animation::Manager*);
		bool finished(svgl::Animation::Manager*);

	public:
		virtual void animationTraverse(svgl::AnimationInfo*)  ;

	public:
		virtual void tick(svgl::Animation::TickInfo*);
		virtual void reset();
	public:
		virtual float getStartTime (  ) ;
		virtual float getCurrentTime (  ) ;
		virtual float getSimpleDuration (  ) ;
		virtual int parse_attributes(const String&, const String&);
		virtual void print_attributes(xmlostream&);
	public:
		virtual svgl::AnimateAdapter* getAttributeByName(const String&);

	public:
		virtual ~SVGAnimationElement();
		SVGAnimationElement(dom::Document* doc, unicode::String* tagName) : SVGElement(doc, tagName) {}
	};
}


#endif // __svg_SVGAnimationElement__