#ifndef __svg_SVGColorProfileRule__
#define __svg_SVGColorProfileRule__

// generated by genFromIdl.py

namespace svg {
}

#include <w3c/svg/SVGCSSRule.hpp>
#include <w3c/svg/SVGRenderingIntent.hpp>
#include <w3c/svg/Attribute.hpp>
#include <w3c/svg/DOMString.hpp>

namespace svg {
	class SVGColorProfileRule :
		public SVGCSSRule,
		public SVGRenderingIntent {
	public:
	protected:
		Attribute< DOMString > src;
		Attribute< DOMString > name;
		Attribute< RENDERING_INTENT > renderingIntent;
	public:
		const Attribute< DOMString >& dom_getSrc() const { return src; }
		Attribute< DOMString >& dom_getSrc() { return src; }
		void dom_setSrc(const DOMString& n)  { src.setValue(n); }

		const Attribute< DOMString >& dom_getName() const { return name; }
		Attribute< DOMString >& dom_getName() { return name; }
		void dom_setName(const DOMString& n)  { name.setValue(n); }

		const Attribute< RENDERING_INTENT >& dom_getRenderingIntent() const { return renderingIntent; }
		Attribute< RENDERING_INTENT >& dom_getRenderingIntent() { return renderingIntent; }
		void dom_setRenderingIntent(const RENDERING_INTENT& n)  { renderingIntent.setValue(n); }

	public:
		const DOMString & getSrc() const { return src.getValue(); }
		DOMString & getSrc() { return src.getValue(); }
		void setSrc(const DOMString& n)  { src.setValue(n); }

		const DOMString & getName() const { return name.getValue(); }
		DOMString & getName() { return name.getValue(); }
		void setName(const DOMString& n)  { name.setValue(n); }

		const RENDERING_INTENT & getRenderingIntent() const { return renderingIntent.getValue(); }
		RENDERING_INTENT & getRenderingIntent() { return renderingIntent.getValue(); }
		void setRenderingIntent(const RENDERING_INTENT& n)  { renderingIntent.setValue(n); }

	public:

	public:
		virtual ~SVGColorProfileRule();
	};
}


#endif // __svg_SVGColorProfileRule__