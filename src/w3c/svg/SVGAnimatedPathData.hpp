#ifndef __svg_SVGAnimatedPathData__
#define __svg_SVGAnimatedPathData__

// generated by genFromIdl.py
	class xmlostream;

namespace svg {
}

namespace svgl {
	class AnimateAdapter;
}

#include <w3c/svg/Attribute.hpp>
#include <w3c/svg/SVGPathSegList.hpp>
#include <w3c/svg/String.hpp>

namespace svg {
	class SVGAnimatedPathData {
	public:
	protected:
		Attribute< SVGPathSegList > pathSegList;
		Attribute< SVGPathSegList > normalizedPathSegList;
		Attribute< SVGPathSegList > animatedPathSegList;
		Attribute< SVGPathSegList > animatedNormalizedPathSegList;
	public:
		const Attribute< SVGPathSegList >& dom_getPathSegList() const { return pathSegList; }

		const Attribute< SVGPathSegList >& dom_getNormalizedPathSegList() const { return normalizedPathSegList; }

		const Attribute< SVGPathSegList >& dom_getAnimatedPathSegList() const { return animatedPathSegList; }

		const Attribute< SVGPathSegList >& dom_getAnimatedNormalizedPathSegList() const { return animatedNormalizedPathSegList; }

	public:
		const SVGPathSegList & getPathSegList() const { return pathSegList.getValue(); }
		void setPathSegList(const SVGPathSegList& n)  { pathSegList.setValue(n); }

		const SVGPathSegList & getNormalizedPathSegList() const { return normalizedPathSegList.getValue(); }
		void setNormalizedPathSegList(const SVGPathSegList& n)  { normalizedPathSegList.setValue(n); }

		const SVGPathSegList & getAnimatedPathSegList() const { return animatedPathSegList.getValue(); }
		void setAnimatedPathSegList(const SVGPathSegList& n)  { animatedPathSegList.setValue(n); }

		const SVGPathSegList & getAnimatedNormalizedPathSegList() const { return animatedNormalizedPathSegList.getValue(); }
		void setAnimatedNormalizedPathSegList(const SVGPathSegList& n)  { animatedNormalizedPathSegList.setValue(n); }


	public:
		virtual ~SVGAnimatedPathData() {}
	public:
		virtual int parse_attributes(const String&, const String&);
		virtual void print_attributes(xmlostream&);
	public:
		virtual svgl::AnimateAdapter* getAttributeByName(const String&);
	};
}


#endif // __svg_SVGAnimatedPathData__