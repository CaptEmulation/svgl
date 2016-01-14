#ifndef __svg_SVGColorProfileElement__
#define __svg_SVGColorProfileElement__

// generated by genFromIdl.py
	class xmlostream;

namespace svg {
}

namespace svgl {
	class AnimateAdapter;
}

#include <w3c/svg/SVGElement.hpp>
#include <w3c/svg/SVGURIReference.hpp>
#include <w3c/svg/SVGRenderingIntent.hpp>
#include <w3c/svg/Attribute.hpp>
#include <w3c/svg/DOMString.hpp>
#include <w3c/svg/String.hpp>

namespace svg {
            extern unicode::String * SVGColorProfileElement_element_string;
}

namespace svg {
	class SVGColorProfileElement :
		public SVGElement,
		public SVGURIReference,
		public SVGRenderingIntent {
	public:
	protected:
		Attribute< DOMString > local;
		Attribute< DOMString > name;
		Attribute< RENDERING_INTENT > renderingIntent;
	public:
		const Attribute< DOMString >& dom_getLocal() const { return local; }
		Attribute< DOMString >& dom_getLocal() { return local; }
		void dom_setLocal(const DOMString& n)  { local.setValue(n); }

		const Attribute< DOMString >& dom_getName() const { return name; }
		Attribute< DOMString >& dom_getName() { return name; }
		void dom_setName(const DOMString& n)  { name.setValue(n); }

		const Attribute< RENDERING_INTENT >& dom_getRenderingIntent() const { return renderingIntent; }
		Attribute< RENDERING_INTENT >& dom_getRenderingIntent() { return renderingIntent; }
		void dom_setRenderingIntent(const RENDERING_INTENT& n)  { renderingIntent.setValue(n); }

	public:
		const DOMString & getLocal() const { return local.getValue(); }
		DOMString & getLocal() { return local.getValue(); }
		void setLocal(const DOMString& n)  { local.setValue(n);  setDamaged(true); }

		const DOMString & getName() const { return name.getValue(); }
		DOMString & getName() { return name.getValue(); }
		void setName(const DOMString& n)  { name.setValue(n);  setDamaged(true); }

		const RENDERING_INTENT & getRenderingIntent() const { return renderingIntent.getValue(); }
		RENDERING_INTENT & getRenderingIntent() { return renderingIntent.getValue(); }
		void setRenderingIntent(const RENDERING_INTENT& n)  { renderingIntent.setValue(n);  setDamaged(true); }

	public:
		virtual int parse_attributes(const String&, const String&);
		virtual void print_attributes(xmlostream&);
	public:
		virtual svgl::AnimateAdapter* getAttributeByName(const String&);

	public:
		virtual ~SVGColorProfileElement();
		virtual const String getDtdElement() const { return SVGColorProfileElement_element_string; }
		SVGColorProfileElement(dom::Document* doc) : SVGElement(doc, SVGColorProfileElement_element_string) {}
	};
}


#endif // __svg_SVGColorProfileElement__