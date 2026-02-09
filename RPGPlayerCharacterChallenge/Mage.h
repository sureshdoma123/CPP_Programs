#ifndef MAGE_H
#define MAGE_H
#include "Player.h"

class Mage : public Player {
public:
	Mage(string name, Race race) : Player(name, race, 150, 150) {
		std::cout << "Mage class constructor called" << endl;
	}

	~Mage() override {
		std::cout << "Mage class destructor called!" << std::endl;
	}

	string attack() const override {
		return "I will crush you with the power of my arcane missiles!";
	}
};

#endif