#include "Triangle.h"
#include "math.h"
#include <iostream>

using namespace std;

Triangle::Triangle()
{
	cout << "Default Constructor called.." << endl;
	this->sideA = 1;
	this->sideB = 1;
	this->sideC = 1;
}
Triangle::Triangle(double sideA, double sideB, double sideC)
{
	cout << "Parameter Constructor called.." << endl;
	this->sideA = sideA;
	this->sideB = sideB;
	this->sideC = sideC;
}
Triangle::~Triangle() {
	cout << "Default Destructor called.." << endl;
}

void Triangle::setSideA(double sideA) {
	this->sideA = sideA;
}
void Triangle::setSideB(double sideB) {
	this->sideB = sideB;
}
void Triangle::setSideC(double sideC) {
	this->sideC = sideC;
}

double Triangle::getSideA() const {
	return this->sideA;
}

double Triangle::getSideB() const {
	return this->sideB;
}

double Triangle::getSideC() const {
	return this->sideC;
}

bool Triangle::isValid() const {
	return (this->sideA + this->sideB > this->sideC) &&
		(this->sideA + this->sideC > this->sideB) &&
		(this->sideB + this->sideC > this->sideA);
}

double Triangle::perimiter() const {
	return this->sideA + this->sideB + this->sideC;
}

double Triangle::area() const {
	double semiPerimeter = perimiter() / 2;
	return sqrt(semiPerimeter * (semiPerimeter - this->sideA) * (semiPerimeter - this->sideB) * (semiPerimeter - this->sideC));
}

void Triangle::printTrianlgeData() const {
	cout << "Triangle Sides: " <<
		this->sideA << ", " <<
		this->sideB << ", " <<
		this->sideC << "." << endl;
	cout << "\tTrianlge is Valid: " << (isValid() ? "Trianlge is Valid!" : "Triangle is not Valid!") << endl;
	if (isValid()) cout << "\tPerimeter: " << perimiter() << endl << "\tArea: " << area() << endl;
}