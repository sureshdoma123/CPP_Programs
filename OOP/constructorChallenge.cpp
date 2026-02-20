#include <iostream>
#include <string>
using namespace std;

class House
{
	public:
		House(string houseName, string color, int numberOfFloors)
		{
			cout << "House Cunstructor for " << houseName <<" is called.." << endl;
			houseName_ = houseName;
			color_ = color;
			numberOfFloors_ = numberOfFloors;
		}
		
		~House()
		{
			cout << "House Destructor for " << houseName_ << " is called.." << endl;
		}
		
		void print() const
		{
			cout << "--------------Printing House Data ------------" << endl << "House Name is: " << houseName_ << endl << 
					"House Color is: " << color_ << endl << 
					"House Floors is: " << numberOfFloors_ << endl;
		}
		
		
	private:
		string houseName_, color_;
		int numberOfFloors_;
};


int main()
{
	House myHouse("suresh", "white & grey", 2);
	House yourHouse("Doma", "White & gold", 3);
	
	myHouse.print();
	yourHouse.print();

	return 0;
}