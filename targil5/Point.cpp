#include "Point.h"
#include <cmath>


Point::Point(double x, double y)
{
}

Point Point::operator+(const Point& other) const
{
	return Point(_x + other._x, _y + other._y);
}

Point& Point::operator+=(const Point& other)
{
	_x += other._x;
	_y += other._y;
	return *this;
}

double Point::getX() const
{
	return 0.0;
}

double Point::getY() const
{
	return 0.0;
}

double Point::distance(Point& other)
{
	
	_distance = pow(_x - other._x,2 ) + pow(_y - other._y, 2) ;
	_distance = sqrt(_distance);
	return _distance;
}
