#include "Fighter.h"
#include <iostream>


Fighter::Fighter(const std::string name, unsigned int hp) : name(name), hp(hp), max_hp(hp)
{
	std::cout << "Harcos inicializalasa Constructorral!  " << name<<  std::endl;
}
Fighter::~Fighter()
{
	std::cout << "Harcos torlese Destructorral! " << name << std::endl;
}

std::string Fighter:: getName() {
	return name;
}
unsigned int Fighter::getHp() {
	return hp;
}


void Fighter::addHp(unsigned int hp) {
	if (this->hp > 0) {
		this->hp += hp;
		if (this->hp > max_hp) {
			this->hp = max_hp;
		}
	}
	else {
		std::cout << "az eleterom lecsokkent 0 -ra, innen mar nem lehet gyogyitani!" << std::endl;
	}
	}

void Fighter::removeHp(unsigned int diff_hp) {
	if (this->hp > 0) {
		this->hp -= diff_hp;
	}
	else {
		std::cout << "az eleterom lecsokkent 0 -ra, innen mar nem lehet sebezni!" << std::endl;
	}
	   }

void Fighter::addWeapon(Weapon* weapon) {

	this->weapon = weapon;
}


void Fighter:: attack(Fighter& other) {
	std::cout<<"|||ESEMENY|||" <<name << " Megtamadja: " << other.getName() << "-t" << std::endl;
	if (this->weapon != nullptr) {

		if (this->weapon->getAmmo() > 0)						//ELLENÕRZI H VAN E MÉG AMMO
		{
			if (this->weapon->getDmg() > other.getHp()) {    // HA A FEGYVERÜNK SEBZÉSE NAGYOBB MINT AZ OTHER HP-JA, AKKOR 0-RA SEBEZZÜK LE (ENÉLKÜL MEMÓRIASZEMETET DOBOTT ODA)
				other.removeHp(other.getHp());
			}
			else other.removeHp(weapon->getDmg());
			this->weapon->use();                         // CSÖKKENTI AZ AMMOT

		}
		else std::cout << "nem tudok a fegyverrel tamadni, elfogyott a tamadasi lehetoseg vele('ammo')" << std::endl << std::endl;  ///HA NINCS AMMO NEM TÁMADHAT AZZAL A FEGYVERREL
	}
}
void Fighter::heal(Fighter& other) {
	std::cout<<name << " Meggyogyitja: " << other.getName() << "-t" << std::endl;
	other.addHp(HEAL_DIFF);
}


void Fighter::print() {
	std::cout << "Fighter neve: " << name << std::endl;
	std::cout << "Fighter hp-ja: " << hp << std::endl;
	if (weapon != nullptr) {
		std::cout << "Fegyvere: " << weapon->getName() <<", ami " << weapon->getDmg()<< " sebzessel rendelkezik, ammo:"<<weapon->getAmmo()<< std::endl;

	}
	std::cout << "##########################################################\n\n";
	   }










