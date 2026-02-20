#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class EmployeeSalaryReport {
	public:
		EmployeeSalaryReport(string inputFileName){
			this->inputFileName = inputFileName;
			this->totalNoOfEmployees = 0;
			this->totalPayRollCost = 0;
		}

		~EmployeeSalaryReport() {
			//this->inputFile.close();
		}

		int getTotalNoOfEmployeees() const {
			return this->totalNoOfEmployees;
		}

		long int getTotalPayRollCost() const {
			return totalPayRollCost;
		}

		double getAverageSalary() const {
			return totalPayRollCost / totalNoOfEmployees;
		}

		void processInputFile() {
			ifstream inputFile(this->inputFileName);

			if (!inputFile) {
				cerr << "Error: Not able to open given " << this->inputFileName << " input file." << endl;
			}

			long int tempNum;
			while (inputFile >> tempNum) {
				//cout << "suresh: " << tempNum;
				this->totalNoOfEmployees++;
				this->totalPayRollCost += tempNum;
			}

			inputFile.close();
		}

	private:
		int totalNoOfEmployees;
		long int totalPayRollCost;
		string inputFileName;
};

int main()
{
	string localFileName;
	cout << "Enter Input File name: ";
	cin >> localFileName;

	EmployeeSalaryReport randomCompanyData(localFileName);
	randomCompanyData.processInputFile();
	cout << "Random Company details are: " << "\n\t Total No of Employees: " <<
		randomCompanyData.getTotalNoOfEmployeees() << "\n\t Total Pay Roll Cost: " <<
		randomCompanyData.getTotalPayRollCost() << "\n\t Average Salary: " <<
		randomCompanyData.getAverageSalary() << endl;


	return 0;
}