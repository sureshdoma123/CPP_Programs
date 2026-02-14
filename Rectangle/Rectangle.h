#ifndef RECTANGLE_H
#define RECTANGLE_H

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
	
private:
	double length_, width_;
};

#endif