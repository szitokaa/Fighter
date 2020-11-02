#pragma once
#include <string>
#include "Weapon.h"


constexpr unsigned int HEAL_DIFF = 20;

class Fighter {
private:
	const std::string name;
	unsigned int hp;
	const unsigned int max_hp;
	mutable Weapon* weapon;
public:
	Fighter(std::string name, unsigned int hp);
	~Fighter();

	std::string getName();

	unsigned int getHp();
	
	void attack(Fighter& other);

	void removeHp(unsigned int diff_hp);

	void heal(Fighter& other);

	void addHp(unsigned int hp);

 	void addWeapon(Weapon* weapon);
	
	void print();








};