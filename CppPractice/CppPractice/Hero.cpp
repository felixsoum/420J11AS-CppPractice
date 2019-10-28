#include "Hero.h"
#include <iostream>
using namespace std;

void Hero::attack(const Monster * monster) const
{
	level++;
	cout << "Hero attacks " << monster->name << ".\n";
}
