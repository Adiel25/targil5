#include "Arrow.h"

#include <iostream>
Point Arrow::getSource() const
{
	return Point();
}
Point Arrow::getDestination() const
{
	return Point();
}
void Arrow::move(Point& other)
{
	_source.setX(_source.getX() + other.getX());
	_source.setY(_source.getY() + other.getY());

	_destination.setX(_destination.getX() + other.getX());
	_destination.setY(_destination.getY() + other.getY());
}

void Arrow::checkPoints() const
{
	if (_source.getX() == _destination.getX() && _source.getY() == _destination.getY())
	{
		std::cerr << "error: start and end points of the arrow cannot be the same." << std::endl;
		exit(1);
	}
}

void Arrow::draw(const Canvas& canvas)
{
	canvas.draw_arrow(_source, _destination);
}
void Arrow::clearDraw(const Canvas& canvas)
{
	canvas.clear_arrow(_source, _destination);
}
double Shape::getArea() const
{
	return 0.0;
}

