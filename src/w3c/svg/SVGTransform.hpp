#ifndef __svg_SVGTransform__
#define __svg_SVGTransform__

// generated by genFromIdl.py

namespace svg {
	class SVGMatrix;
}

namespace svgl {
	class Context;
	class GLInfo;
}

#include <w3c/svg/Attribute.hpp>
#include <w3c/svg/SVGMatrix.hpp>
#include <iosfwd>

namespace svg {
	class SVGTransform {
	public:

		enum SVG_TRANSFORM {
			SVG_TRANSFORM_UNKNOWN = 0,
			SVG_TRANSFORM_MATRIX = 1,
			SVG_TRANSFORM_TRANSLATE = 2,
			SVG_TRANSFORM_SCALE = 3,
			SVG_TRANSFORM_ROTATE = 4,
			SVG_TRANSFORM_SKEWX = 5,
			SVG_TRANSFORM_SKEWY = 6
		};

	protected:
		Attribute< SVG_TRANSFORM > type;
		Attribute< SVGMatrix > matrix;
		Attribute< float > angle;
	public:
		const Attribute< SVG_TRANSFORM >& dom_getType() const { return type; }

		const Attribute< SVGMatrix >& dom_getMatrix() const { return matrix; }

		const Attribute< float >& dom_getAngle() const { return angle; }

	public:
		const SVG_TRANSFORM & getType() const { return type.getValue(); }
		void setType(const SVG_TRANSFORM& n)  { type.setValue(n); }

		const SVGMatrix & getMatrix() const { return matrix.getValue(); }
		const float & getAngle() const { return angle.getValue(); }
		void setAngle(const float& n)  { angle.setValue(n); }


	public:
		struct Exc {};
		struct WrongNumberOfArguments : Exc {};
		virtual void setNeutral()=0;
		virtual void print(std::ostream&) const;
		virtual void apply(double x, double y, double* x1, double* y1) const = 0;
		virtual void apply(SVGMatrix*) const = 0;
		virtual void updateMatrix() {};

		virtual void glTraverse(svgl::Context*, svgl::GLInfo*) const =0;

	public:
		virtual ~SVGTransform() {}
	public:
		virtual void setMatrix ( const SVGMatrix& matrix ) ;
		virtual void setTranslate ( float tx, float ty ) ;
		virtual void setScale ( float sx, float sy ) ;
		virtual void setRotate ( float angle, float cx, float cy ) ;
		virtual void setSkewX ( float angle ) ;
		virtual void setSkewY ( float angle ) ;
	};
}


#endif // __svg_SVGTransform__