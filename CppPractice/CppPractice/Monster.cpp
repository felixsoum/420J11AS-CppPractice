#include "Monster.h"
#include <iostream>

Monster::Monster(std::string givenName)
{
	name = givenName;
	std::cout << "My name is " << name << ".\n";
}
