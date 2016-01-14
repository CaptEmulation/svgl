#ifndef __svg_SVGPolylineElement__
#define __svg_SVGPolylineElement__

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
#include <w3c/svg/SVGAnimatedPoints.hpp>
#include <w3c/svg/String.hpp>

namespace svg {
            extern unicode::String * SVGPolylineElement_element_string;
}

namespace svg {
	class SVGPolylineElement :
		public SVGElement,
		public SVGTests,
		public SVGLangSpace,
		public SVGExternalResourcesRequired,
		public SVGStylable,
		public SVGTransformable,
		public events::EventTarget,
		public SVGAnimatedPoints {
	public:

		virtual void glTraverse(svgl::Context*, svgl::GLInfo*)  ;

		virtual void pickTraverse(svgl::Context*, svgl::GLInfo*)  ;

	  virtual void getBoundingBox(svgl::Context* svglContext, svgl::GLInfo* glinfo, float*, float*, float*, float*) ;
	  //virtual void glTraverseFill(svgl::Context* svglContext, svgl::GLInfo* glinfo) ;
	  //virtual void glTraverseStroke(svgl::Context* svglContext, svgl::GLInfo* glinfo, float sw) ;
          virtual void glTraverseBoundingBox(svgl::Context * svglContext, svgl::GLInfo* glinfo) ;
          virtual void asBezier(svgl::Context* svglContext, svgl::GLInfo* glinfo, BezierPath*);
          virtual void asBezier(svgl::Context* svglContext, svgl::GLInfo* glinfo, agg::path_storage*);
	public:
		virtual int parse_attributes(const String&, const String&);
		virtual void print_attributes(xmlostream&);
	public:
		virtual svgl::AnimateAdapter* getAttributeByName(const String&);

	public:
		virtual ~SVGPolylineElement();
		virtual const String getDtdElement() const { return SVGPolylineElement_element_string; }
		SVGPolylineElement(dom::Document* doc) : SVGElement(doc, SVGPolylineElement_element_string) {}
	};
}


#endif // __svg_SVGPolylineElement__
