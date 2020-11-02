#include "Weapon.h"


Weapon::Weapon(const std::string name,
	unsigned int dmg,
	unsigned int ammo) : name(name), dmg(dmg), ammo(ammo)
{

}
void Weapon::use() {
	ammo--;
}
unsigned int Weapon::getAmmo() {
	return ammo;
	   }
std::string Weapon::getName() const {
	return name;
}
unsigned int Weapon::getDmg() {
	return dmg;
}
