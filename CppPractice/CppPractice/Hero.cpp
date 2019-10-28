#include "Hero.h"
#include <iostream>
using namespace std;

void Hero::attack(const Monster * monster) const
{
	cout << "Hero attacks " << monster->name << ".\n";
}
