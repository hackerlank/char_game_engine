#include "Drawable.h"

namespace edolphin
{


DrableAttribute Drawable::getAttribute() {
	DrableAttribute res;
	res.position = this->_position;
	return res;
}

void Drawable::setAttribute(DrableAttribute attr) {
	this->_position = attr.position;
}

Rect Drawable::getRect() {
	return Rect(_position, size);
}


} /* edolphin */ 
