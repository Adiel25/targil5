#include "Shape.h"

#include <iostream>
std::string Shape::getType() const
{
	return _type;
}

std::string Shape::getName() const
{
	return _name;
}

double Shape::getArea() const
{
	return 0.0;
}

double Shape::getPerimeter() const
{

	return 0.0;
}

void Shape::move(Point other)
{
	std::cout << "moving the shape by (" << other.getX() << " , " << other.getY() << ")" << std::endl;
}

void Shape::printDetails() const
{
	std::cout << "name: " << _name << " , type:" << _type << std::endl;
}
