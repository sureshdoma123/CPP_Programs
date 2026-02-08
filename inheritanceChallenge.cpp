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
	string makeNoise() {
		return "unknown";
	}
private:
	string name;
	double weight;
};

class Dog : public Animal {
public:
	Dog() {
		this->breed = "";
	}
	Dog(string name, double weight, string breed): Animal(name, weight) {
		this->breed = breed;
	}
	string getBreed() const {
		return this->breed;
	}
	void digHole() {
		cout << "Dog digged a hole!" << endl;
	}
private:
	string breed;
};

int main()
{
	//Animal myAnimal("tommy", 28);

	Dog myDog("Jimmy", 27, "Golden Retriever");

	cout << "myAnimal Details are: " <<
		"\n\tName: " << myDog.getName() <<
		"\n\tWeight: " << myDog.getWeight() <<
		"\n\tNoise: " << myDog.makeNoise() <<
		"\n\tBreed: " << myDog.getBreed() << endl;
	myDog.digHole();
	return 0;
}