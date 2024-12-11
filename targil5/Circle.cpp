#include "Circle.h"


Point Circle::getCenter() const
{
	return Point();
}

double Circle::getRadius() const
{
	return 0.0;
}

void Circle::draw(const Canvas& canvas)
{
	canvas.draw_circle(getCenter(), getRadius());
}

void Circle::clearDraw(const Canvas& canvas)
{
	canvas.clear_circle(getCenter(), getRadius());
}


