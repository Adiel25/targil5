#pragma once
#include "Shape.h"
#include <cstdlib>

class Arrow : public Shape
{
public:

	// Constructor
	Arrow(Point a, Point b, std::string type, std::string name) : Shape(name, "Arrow"), _source(_start), _destination(_end)
	{
		checkPoints();
	}

	// Destructor
	~Arrow();

	// Getters
	Point getSource() const;
	Point getDestination() const;
	void move(Point& other);

	// Methods
	double getX() const;
	double getY() const;

	double Shape::getArea() const ;
	void checkPoints() const;

	void draw(const Canvas& canvas) override;
	void clearDraw(const Canvas& canvas) override;

	// override functions if need (virtual + pure virtual)

private:
	Point _source;
	Point _destination;
	Point _start;   
	Point _end;
	

};