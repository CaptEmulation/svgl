#ifndef __svg_SVGPathSegClosePath__
#define __svg_SVGPathSegClosePath__

// generated by genFromIdl.py
	class BezierPath;

namespace svg {
}

namespace agg {
	class path_storage;
}

#include <w3c/svg/SVGPathSeg.hpp>

namespace svg {
	class SVGPathSegClosePath :
		public SVGPathSeg {
	public:

	public:
		SVGPathSegClosePath() : SVGPathSeg(PATHSEG_CLOSEPATH,'z') {}
		virtual ~SVGPathSegClosePath() {}
		virtual void updateBezier(BezierPath&) const;
		virtual void updateBezier(agg::path_storage&) const;
	public:
	};
}


#endif // __svg_SVGPathSegClosePath__
