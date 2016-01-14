#ifndef __svg_SVGPathSegCurvetoQuadraticSmoothRel__
#define __svg_SVGPathSegCurvetoQuadraticSmoothRel__

// generated by genFromIdl.py
	class BezierPath;

namespace svg {
}

namespace agg {
	class path_storage;
}

#include <w3c/svg/SVGPathSeg.hpp>
#include <w3c/svg/Attribute.hpp>

namespace svg {
	class SVGPathSegCurvetoQuadraticSmoothRel :
		public SVGPathSeg {
	public:
	protected:
		Attribute< float > x;
		Attribute< float > y;
	public:
		const Attribute< float >& dom_getX() const { return x; }
		Attribute< float >& dom_getX() { return x; }
		void dom_setX(const float& n)  { x.setValue(n); }

		const Attribute< float >& dom_getY() const { return y; }
		Attribute< float >& dom_getY() { return y; }
		void dom_setY(const float& n)  { y.setValue(n); }

	public:
		const float & getX() const { return x.getValue(); }
		float & getX() { return x.getValue(); }
		void setX(const float& n)  { x.setValue(n); }

		const float & getY() const { return y.getValue(); }
		float & getY() { return y.getValue(); }
		void setY(const float& n)  { y.setValue(n); }


	public:
		SVGPathSegCurvetoQuadraticSmoothRel() : SVGPathSeg(PATHSEG_CURVETO_QUADRATIC_SMOOTH_REL,'t') {}
		virtual ~SVGPathSegCurvetoQuadraticSmoothRel() {}
		virtual void updateBezier(BezierPath&) const;
		virtual void updateBezier(agg::path_storage&) const;
	public:
	};
}


#endif // __svg_SVGPathSegCurvetoQuadraticSmoothRel__
