#ifndef PRIEST_H
#define PRIEST_H
#include "Player.h"

class Priest : public Player {
public:
	Priest(string name, Race race) : Player(name, race, 100, 200) {
		std::cout << "Priest class constructor called" << endl;
	}

	~Priest() override {
		std::cout << "Priest class destructor called!" << std::endl;
	}

	string attack() const override {
		return "I will assault you with Holy Wrath!";
	}
};

#endif