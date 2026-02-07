#include <iostream>
#include <string>

using namespace std;
void usingNewAndDeleteKeywords();
void usingPointersWithClasses();
void usingPointersWithArrays();
void usingConstCorrectness();

void dynamicExhibitsChallenge();
void droneFleetChallenge();


class Dog {
	public:
		Dog(string name, string breed) {
			this->name = name;
			this->breed = breed;
		}

		string getName() const {
			return this->name;
		}
		string getBreed() const {
			return this->breed;
		}

	private:
		string name, breed;
};

void usingNewAndDeleteKeywords() {
	// Using new and delete keywords to allocate and delete memory
	bool* boolPtr = new bool(false);

	*boolPtr = true;

	cout << "boolPtr value is: " << boolalpha << *boolPtr << endl;

	delete boolPtr;
}

void usingPointersWithClasses() {
	Dog* d1 = new Dog("Tommy", "Golden Retriever");
	Dog* d2 = new Dog("Bunty", "Pomerian");

	// using -> arrow operator
	cout << "Print data using -> arrow operator" << endl;
	cout << "d1 name and breed is: " << d1->getName() << ", " << d1->getBreed() << endl;
	cout << "d2 name and breed is: " << d2->getName() << ", " << d2->getBreed() << endl;

	// using dereference and dot operator
	cout << "Print data using dereference and dot operators" << endl;
	cout << "d1 name and breed is: " << (*d1).getName() << ", " << (*d1).getBreed() << endl;
	cout << "d2 name and breed is: " << (*d2).getName() << ", " << (*d2).getBreed() << endl;

	delete d1;
	delete d2;
}

void usingPointersWithArrays() {
	int array_size;
	cout << "Enter array size: ";
	cin >> array_size;

	int* myArray = new int[array_size];

	for (int i = 0; i < array_size; i++) {
		myArray[i] = (i + 1) * 2;
	}

	for (int i = 0; i < array_size; i++) {
		cout << myArray[i] << " ";
	}
	cout << endl;

	delete[] myArray;
	myArray = nullptr;
}

void usingConstCorrectness(const double* const somePtr) {
	//*somePtr = 124.234;
	//somePtr = new double(12242.214234);
	cout << "The given values is: " << *somePtr << endl;

}

class DynamicExhibits {
	public:
		DynamicExhibits(string name, int rooNumber, double displaySize) {
			this->name = name;
			this->roomNumber = rooNumber;
			this->displaySize = displaySize;
		}
		string getName() const {
			return this->name;
		}
		int getRoomNumber() {
			return this->roomNumber;
		}
		double getDisplaySize() {
			return this->displaySize;
		}
	private:
		string name;
		int roomNumber;
		double displaySize;
	};

void dynamicExhibitsChallenge()
{
	const int array_size = 3;
	DynamicExhibits* myArray[array_size];
	myArray[0] = new DynamicExhibits("Suresh", 312, 123.23);
	myArray[1] = new DynamicExhibits("Nivas", 312, 456.25);
	myArray[2] = new DynamicExhibits("Nagendra", 312, 789.1213);

	for (auto it : myArray) {
		cout << "Details are: " << it->getName() << ", " << it->getRoomNumber() << ", " << it->getDisplaySize() << endl;
	}

	for (auto it : myArray) {
		delete it;
		it = nullptr;
	}

	//delete[] myArray;
	//myArray = nullptr;
}

class DroneFleet {
	public:
		DroneFleet(string modelName, double batteryLife){
			this->modelName = modelName;
			this->batteryLife = batteryLife;
		}
		string getModelName() const {
			return this->modelName;
		}
		double getBatteryLife() const {
			return this->batteryLife;
		}
	private:
		string modelName;
		double batteryLife;
};

void droneFleetChallenge()
{
	int noOfDrones;
	cout << "Enter No of Drones are in fleet:";
	cin >> noOfDrones;
	DroneFleet* droneFleetArray[noOfDrones];
	for (int i = 0; i < noOfDrones; i++) {
		string model;
		double battery;
		cout << "Enter Drone Mode for " << i + 1 << " drone: ";
		cin >> model;
		cout << "Enter Battery life for " << i + 1 << " drone: ";
		cin >> battery;
		droneFleetArray[i] = new DroneFleet(model, battery);
	}

	for (auto it : droneFleetArray) {
		cout << "Drone Details are: " << it->getModelName() << ", " << it->getBatteryLife() << "%" << endl;
	}

	for (auto it : droneFleetArray) {
		delete it;
		it = nullptr;
	}
}

int main()
{
	usingNewAndDeleteKeywords();

	usingPointersWithClasses();
	
	//usingPointersWithArrays();

	const double* const doublePtr = new double(151.14343214);
	usingConstCorrectness(doublePtr);
	delete doublePtr;

	dynamicExhibitsChallenge();

	droneFleetChallenge();

	return 0;
}