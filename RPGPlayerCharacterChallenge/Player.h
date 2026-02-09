#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>
using namespace std;

enum class Race {
	HUMAN, 
	ELF, 
	DWARF, 
	ORC, 
	TROLL,
	None
};

class Player {
public:
	Player();
	Player(string name, Race race, int hitPoints, int magicPoints);
	virtual ~Player() = default;
	void setName(string name);
	void setRace(Race race);
	void setHitPoints(int hitPoints);
	void setMagicPoints(int magicPoints);

	string getName() const;
	Race getRace() const;
	string whatRace() const;
	int getHitPoints() const;
	int getMagicPoints() const;

	virtual string attack() const = 0;
private:
	string name;
	Race race;
	int hitPoints, magicPoints;
};

#endif