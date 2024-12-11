#pragma once

#include "Shape.h"
#include <vector>

class Polygon : public Shape
{
public:

	// Constructor
	Polygon(std::string type, std::string name);

	// Destructor
	~Polygon();

	// Methods
	double getPerimeter() const override;
	void move(Point&);

	// Getters
	std::vector<Point> getPoints() const;

	// override functions if need (virtual + pure virtual)

protected:
	std::vector<Point> _points;

private:
	std::string _type;
	std::string _name;
};