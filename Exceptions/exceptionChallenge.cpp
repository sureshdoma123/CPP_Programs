#include <iostream>
#include <vector>
#include <stdexcept>
#include <string>

using namespace std;

class Dog {
	public:
		Dog(string breed) {
			//cout << "Dog calss Parameter Constructor called" << endl;
			try {
				if (breed != "Poodle" && breed != "poodle") {
					this->breed = breed;
				}
				else {
					throw runtime_error("Not able to create a dog class obj with Poodle breed!");
				}
			}
			catch(const runtime_error & error) {
				cerr << error.what() << endl;
			}
		}

		~Dog() {
			cout << "Dog calss Parameter Destructor called" << endl;
		}

		string getDogBreed() const {
			return this->breed;
		}
	private:
		string breed;
};

int main()
{
	Dog d1("Golden Retriver");
	Dog d2("Pomerian");
	Dog d3("Poodle");
	Dog d4("Normal");

	cout << "Dog d1 breed is: " << d1.getDogBreed() << endl <<
			"Dog d2 breed is: " << d2.getDogBreed() << endl <<
			"Dog d3 breed is: " << d3.getDogBreed() << endl <<
			"Dog d4 breed is: " << d4.getDogBreed() << endl;
	return 0;
}
