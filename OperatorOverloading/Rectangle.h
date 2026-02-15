#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>

class Rectangle {
public:
	Rectangle();
	Rectangle(double length, double width);

	~Rectangle();

	void setLength(double value);
	void setWidth(double value);
	double getLength() const;
	double getWidth() const;

	double area() const;
	double permiter() const;

	bool operator==(const Rectangle &r2) const;
	bool operator!=(const Rectangle &r2) const;
	Rectangle operator+(const Rectangle &r2) const;
	bool operator<(const Rectangle &r2) const;

private:
	double length_, width_;
};

#endif