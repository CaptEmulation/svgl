#ifndef __svg_SVGPathSegCurvetoCubicRel__
#define __svg_SVGPathSegCurvetoCubicRel__

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
	class SVGPathSegCurvetoCubicRel :
		public SVGPathSeg {
	public:
	protected:
		Attribute< float > x;
		Attribute< float > y;
		Attribute< float > x1;
		Attribute< float > y1;
		Attribute< float > x2;
		Attribute< float > y2;
	public:
		const Attribute< float >& dom_getX() const { return x; }
		Attribute< float >& dom_getX() { return x; }
		void dom_setX(const float& n)  { x.setValue(n); }

		const Attribute< float >& dom_getY() const { return y; }
		Attribute< float >& dom_getY() { return y; }
		void dom_setY(const float& n)  { y.setValue(n); }

		const Attribute< float >& dom_getX1() const { return x1; }
		Attribute< float >& dom_getX1() { return x1; }
		void dom_setX1(const float& n)  { x1.setValue(n); }

		const Attribute< float >& dom_getY1() const { return y1; }
		Attribute< float >& dom_getY1() { return y1; }
		void dom_setY1(const float& n)  { y1.setValue(n); }

		const Attribute< float >& dom_getX2() const { return x2; }
		Attribute< float >& dom_getX2() { return x2; }
		void dom_setX2(const float& n)  { x2.setValue(n); }

		const Attribute< float >& dom_getY2() const { return y2; }
		Attribute< float >& dom_getY2() { return y2; }
		void dom_setY2(const float& n)  { y2.setValue(n); }

	public:
		const float & getX() const { return x.getValue(); }
		float & getX() { return x.getValue(); }
		void setX(const float& n)  { x.setValue(n); }

		const float & getY() const { return y.getValue(); }
		float & getY() { return y.getValue(); }
		void setY(const float& n)  { y.setValue(n); }

		const float & getX1() const { return x1.getValue(); }
		float & getX1() { return x1.getValue(); }
		void setX1(const float& n)  { x1.setValue(n); }

		const float & getY1() const { return y1.getValue(); }
		float & getY1() { return y1.getValue(); }
		void setY1(const float& n)  { y1.setValue(n); }

		const float & getX2() const { return x2.getValue(); }
		float & getX2() { return x2.getValue(); }
		void setX2(const float& n)  { x2.setValue(n); }

		const float & getY2() const { return y2.getValue(); }
		float & getY2() { return y2.getValue(); }
		void setY2(const float& n)  { y2.setValue(n); }


	public:
		SVGPathSegCurvetoCubicRel() : SVGPathSeg(PATHSEG_CURVETO_CUBIC_REL,'c') {}
		virtual ~SVGPathSegCurvetoCubicRel() {}
		virtual void updateBezier(BezierPath&) const;
		virtual void updateBezier(agg::path_storage&) const;
	public:
	};
}


#endif // __svg_SVGPathSegCurvetoCubicRel__
