#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle {
public:
	Triangle();
	Triangle(double sideA, double sideB, double sideC);
	~Triangle();

	void setSideA(double sideA);
	void setSideB(double sideB);
	void setSideC(double sideC);

	double getSideA() const;
	double getSideB() const;
	double getSideC() const;

	bool isValid() const;
	double perimiter() const;
	double area() const;

	void printTrianlgeData() const;
private:
	double sideA, sideB, sideC;
};

#endif