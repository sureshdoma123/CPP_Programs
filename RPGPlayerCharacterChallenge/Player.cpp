#include "Player.h"

Player::Player(string name, Race race, int hitPoints, int magicPoints) {
	this->name = name;
	this->race = race;
	this->hitPoints = hitPoints;
	this->magicPoints = magicPoints;
}

void Player::setName(string name) {
	this->name = name;
}
void Player::setRace(Race race) {
	this->race = race;
}
void Player::setHitPoints(int hitPoints) {
	this->hitPoints = hitPoints;
}
void Player::setMagicPoints(int magicPoints) {
	this->magicPoints = magicPoints;
}

string Player::getName() const {
	return this->name;
}
Race Player::getRace() const {
	return this->race;
}

string Player::whatRace() const {
	switch (this->race) {
	case Race::HUMAN: return "Human";
	case Race::ELF: return "Elf";
	case Race::DWARF: return "Dwarf";
	case Race::ORC: return "Orc";
	case Race::TROLL: return "Troll";
	default: return "None";
	}
}

int Player::getHitPoints() const {
	return this->hitPoints;
}
int Player::getMagicPoints() const {
	return this->magicPoints;
}