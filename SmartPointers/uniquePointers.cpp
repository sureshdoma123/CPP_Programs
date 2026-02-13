#include <iostream>
#include <memory>
#include <string>
#include <utility>

using namespace std;

class Car {
	public:
		Car(string color, int numDoors) : color(color), numDoors(numDoors) {};
		string getColor() const { return this->color; }
		int getNumDoors() const { return this->numDoors; }
	private:
		string color;
		int numDoors;
};

int main() {
	auto myCar = make_unique<Car>("blue", 4);
	auto friendCar = make_unique<Car>("red", 2);

	cout << "My car details: "
		<< "\n\tCar Color: " << myCar->getColor()
		<< "\n\tCar No of Doors: " << myCar->getNumDoors() << endl;
	
	cout << "My friend car details: "
		<< "\n\tCar Color: " << myCar->getColor()
		<< "\n\tCar No of Doors: " << myCar->getNumDoors() << endl;
	return 0;
}