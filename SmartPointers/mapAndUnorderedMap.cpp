#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <vector>
using namespace std;

void printVector(const vector<string>& vec);

template<typename Container>
void printData(const Container mapData) {
	for (const auto it : mapData) {
		cout << "\n\t'" << it.first << "': " << it.second;
	}
	cout << endl;
}

int main() {
	vector<string> names; // = { "suresh", "nivas", "nagendra", "satish", "madhu", "mad", "sky" };
	int namesSize;
	cout << "Enter number of names you want to add: ";
	cin >> namesSize;
	for (int i = 0; i < namesSize; i++) {
		string temp;
		cin >> temp;
		names.emplace_back(temp);
	}
	printVector(names);

	for (auto it = names.begin(); it != names.end(); ) {
		if (it->length() <= 3) {
			it = names.erase(it);
		} else {
			++it;
		}
	}

	cout << "\nAfter removing the strings:" << endl;
	printVector(names);

	names.erase(remove(names.begin(), names.end(), "satish"), names.end());

	cout << "\nAfter removing the satish  string" << endl;
	printVector(names);

	map<string, int> wordLengthsOrdered;
	unordered_map<string, int> wordLengthsUnOrdered;

	for (string it : names) {
		int count = it.length();
		wordLengthsOrdered[it] = count;
		wordLengthsUnOrdered[it] = count;
	}

	cout << "print ordered_map data:";
	printData(wordLengthsOrdered);

	cout << "print unordered_map data: ";
	printData(wordLengthsUnOrdered);

	if (wordLengthsOrdered.find("suresh") != wordLengthsOrdered.end()) cout << "Suresh name found in ordered map" << endl;
	else cout << "suresh name not found" << endl;

	if (wordLengthsUnOrdered.find("suresh") != wordLengthsUnOrdered.end()) cout << "Nivas name found in unordered map" << endl;
	else cout << "Nivas name not found" << endl;
	return 0;
}

void printVector(const vector<string>& vec) {
	cout << "Printing the Vector: " << endl;
	for (auto it : vec) {
		cout << it << ", ";
	}
	cout << endl;
}
