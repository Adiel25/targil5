#pragma once

class Point
{
public:

	// Constructors
	Point(); // initialize values to 0
	Point(double x, double y);

	// Destructor
	~Point();
	
	// Operators
	Point operator+(const Point& other) const;
	Point& operator+=(const Point& other);

	// Getters
	double getX() const;
	double getY() const;

	void setX(double x) { x = _x; }
	void setY(double y) { y = _y; }

	// Methods
	double distance(Point& other);

private:
	double _x;
	double _y;
	double _distance;
};