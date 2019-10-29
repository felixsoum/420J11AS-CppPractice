#include "Hero.h"
#include <iostream>
using namespace std;

void Hero::attack(const Monster* monster) const
{
	cout << "Hero attacks " << monster->name << ".\n";
}

void Hero::attack(shared_ptr<Monster> monster)
{
	attack(monster.get());
}

void Hero::attack(unique_ptr<Monster>& monster)
{
	attack(monster.get());
}
