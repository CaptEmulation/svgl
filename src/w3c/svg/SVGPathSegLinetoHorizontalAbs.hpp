#ifndef __svg_SVGPathSegLinetoHorizontalAbs__
#define __svg_SVGPathSegLinetoHorizontalAbs__

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
	class SVGPathSegLinetoHorizontalAbs :
		public SVGPathSeg {
	public:
	protected:
		Attribute< float > x;
	public:
		const Attribute< float >& dom_getX() const { return x; }
		Attribute< float >& dom_getX() { return x; }
		void dom_setX(const float& n)  { x.setValue(n); }

	public:
		const float & getX() const { return x.getValue(); }
		float & getX() { return x.getValue(); }
		void setX(const float& n)  { x.setValue(n); }


	public:
		SVGPathSegLinetoHorizontalAbs() : SVGPathSeg(PATHSEG_LINETO_HORIZONTAL_ABS,'H') {}
		virtual ~SVGPathSegLinetoHorizontalAbs() {}
		virtual void updateBezier(BezierPath&) const;
		virtual void updateBezier(agg::path_storage&) const;
	public:
	};
}


#endif // __svg_SVGPathSegLinetoHorizontalAbs__
