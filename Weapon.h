#pragma once
#include <string>
class Weapon {
private:
	const std:: string name;
	unsigned int dmg;
	unsigned int ammo;
	   
public:
	Weapon(const std::string name,
		unsigned int dmg=10,
		unsigned int ammo=10);

	void use();
	std::string getName() const;
	unsigned int getDmg();
	unsigned int getAmmo();
	
};