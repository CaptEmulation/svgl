#ifndef __svg_SVGEllipseElement__
#define __svg_SVGEllipseElement__

// generated by genFromIdl.py
	class xmlostream;
	class BezierPath;

namespace svg {
}

namespace agg {
	class path_storage;
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
#include <w3c/events/EventTarget.hpp>
#include <w3c/svg/Attribute.hpp>
#include <w3c/svg/SVGAnimatedLength.hpp>
#include <w3c/svg/String.hpp>

namespace svg {
            extern unicode::String * SVGEllipseElement_element_string;
}

namespace svg {
	class SVGEllipseElement :
		public SVGElement,
		public SVGTests,
		public SVGLangSpace,
		public SVGExternalResourcesRequired,
		public SVGStylable,
		public SVGTransformable,
		public events::EventTarget {
	public:
	protected:
		Attribute< SVGAnimatedLength > cx;
		Attribute< SVGAnimatedLength > cy;
		Attribute< SVGAnimatedLength > rx;
		Attribute< SVGAnimatedLength > ry;
	public:
		const Attribute< SVGAnimatedLength >& dom_getCx() const { return cx; }

		const Attribute< SVGAnimatedLength >& dom_getCy() const { return cy; }

		const Attribute< SVGAnimatedLength >& dom_getRx() const { return rx; }

		const Attribute< SVGAnimatedLength >& dom_getRy() const { return ry; }

	public:
		const SVGLength & getCx() const { return cx.getValue().getAnimatedVal().getValue(); }
		void setCx(const SVGLength& n)  { cx.getValue().getAnimatedVal().setValue(n); cx.getValue().getBaseVal().setValue(n);  setDamaged(true); }

		const SVGLength & getCy() const { return cy.getValue().getAnimatedVal().getValue(); }
		void setCy(const SVGLength& n)  { cy.getValue().getAnimatedVal().setValue(n); cy.getValue().getBaseVal().setValue(n);  setDamaged(true); }

		const SVGLength & getRx() const { return rx.getValue().getAnimatedVal().getValue(); }
		void setRx(const SVGLength& n)  { rx.getValue().getAnimatedVal().setValue(n); rx.getValue().getBaseVal().setValue(n);  setDamaged(true); }

		const SVGLength & getRy() const { return ry.getValue().getAnimatedVal().getValue(); }
		void setRy(const SVGLength& n)  { ry.getValue().getAnimatedVal().setValue(n); ry.getValue().getBaseVal().setValue(n);  setDamaged(true); }


		virtual void glTraverse(svgl::Context*, svgl::GLInfo*)  ;

		virtual void pickTraverse(svgl::Context*, svgl::GLInfo*)  ;

	  virtual void getBoundingBox(svgl::Context* svglContext, svgl::GLInfo* glinfo, float*, float*, float*, float*) ;
	  //virtual void glTraverseFill(svgl::Context* svglContext, svgl::GLInfo* glinfo) ;
	  //virtual void glTraverseStroke(svgl::Context* svglContext, svgl::GLInfo* glinfo, float sw) ;
          virtual void glTraverseBoundingBox(svgl::Context * svglContext, svgl::GLInfo* glinfo) ;
          virtual void asBezier(svgl::Context* svglContext, svgl::GLInfo* glinfo, BezierPath*);
          virtual void asBezier(svgl::Context* svglContext, svgl::GLInfo* glinfo, agg::path_storage*);

	bool canBeCompiled();
	public:
		virtual int parse_attributes(const String&, const String&);
		virtual void print_attributes(xmlostream&);
	public:
		virtual svgl::AnimateAdapter* getAttributeByName(const String&);

	public:
		virtual ~SVGEllipseElement();
		virtual const String getDtdElement() const { return SVGEllipseElement_element_string; }
		SVGEllipseElement(dom::Document* doc) : SVGElement(doc, SVGEllipseElement_element_string) {}
	};
}


#endif // __svg_SVGEllipseElement__
