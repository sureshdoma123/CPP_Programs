#include<bits/stdc++.h>
using namespace std;

class HouseData{
    public:
        void setHouseName(string houseName)
        {
            this->houseName = houseName;
        }
        void setHouseColor(string color)
        {
            this->color = color;
        }
        void setNumberOfFloors(int numberOfFloors){
            this->numberOfFloors = numberOfFloors;
        }
        void setNumberOfWindows(int numberOfWindows)
        {
            this->numberOfWindows = numberOfWindows;
        }

        string getHouseName() const
        {
            return this->houseName;
        }

        string getHouseColor() const{
            return this->color;
        }

        int getNumberOfFloors() const{
            return this->numberOfFloors;
        }

        int getNumberOfWindows() const{
            return this->numberOfWindows;
        }

    private:
        string houseName, color;
        int numberOfFloors, numberOfWindows;
};

void printHouseData(const HouseData& houseData);

int main()
{
    HouseData houseDataLocal;
    houseDataLocal.setHouseName("Suresh House");
    houseDataLocal.setHouseColor("White and Grey");
    houseDataLocal.setNumberOfFloors(2);
    houseDataLocal.setNumberOfWindows(6);
    printHouseData(houseDataLocal);
    return 0;
}


void printHouseData(const HouseData& houseData)
{
    cout << "--------------Printing House Data ------------" << endl << "House Name is: " << houseData.getHouseName() << endl << 
        "House Color is: " << houseData.getHouseColor() << endl << 
        "House Floors is: " << houseData.getNumberOfFloors() << endl << 
        "House Windows is: " << houseData.getNumberOfWindows() << endl;
}