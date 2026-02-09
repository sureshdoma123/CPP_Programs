#ifndef WARRIOR_H
#define WARRIOR_H
#include "Player.h"

class Warrior : public Player {
public:
	Warrior(string name, Race race) : Player(name, race, 200, 0) {
		std::cout << "Warrior class constructor called" << endl;
	}

	~Warrior() override {
		std::cout << "Warrior class destructor called!" << std::endl;
	}

	string attack() const override {
		return "I will destroy you with my sword, foul demon!";
	}
};

#endif