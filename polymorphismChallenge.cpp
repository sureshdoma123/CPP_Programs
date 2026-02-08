#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	Animal() {
		cout << "Default Constructor called" << endl;
		this->name = "";
		this->weight = 0;
	}
	Animal(string name, double weight) {
		this->name = name;
		this->weight = weight;
	}
	void setName(string name) {
		this->name = name;
	}
	void setWeight(double weight) {
		this->weight = weight;
	}
	string getName() const {
		return this->name;
	}
	double getWeight() const {
		return this->weight;
	}
	//when you declare a virtual method by assigning it to zero(0) the class will became an abstract class and that method will pure virtual function like below
	virtual string makeNoise() const = 0;
	virtual string eat() const = 0;
private:
	string name;
	double weight;
};

class Dog : public Animal {
public:
	Dog() {
		this->breed = "";
	}
	Dog(string name, double weight, string breed) : Animal(name, weight) {
		this->breed = breed;
	}
	string getBreed() const {
		return this->breed;
	}
	void digHole() {
		cout << "Dog digged a hole!" << endl;
	}
	string makeNoise() const override {
		return "Wofhh or Bow Bow..";
	}
	string eat() const override {
		return "Dog is started eating food!";
	}
private:
	string breed;
};

int main() {
	Dog* myDog = new Dog("Jimmy", 27, "Golden Retriever");
	cout << "myAnimal Details are: " <<
		"\n\tName: " << myDog->getName() <<
		"\n\tWeight: " << myDog->getWeight() <<
		"\n\tBreed: " << myDog->getBreed() <<
		"\n\tNoise: " << myDog->makeNoise() <<
		"\n\tEat: " << myDog->eat() << endl;
	myDog->digHole();

	delete myDog;
	myDog = nullptr;
	return 0;
}