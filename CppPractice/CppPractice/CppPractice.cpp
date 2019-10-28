#include "Monster.h"
#include "Hero.h"
#include <vector>
using namespace std;

vector<Monster*> monsters;
Hero hero;

int main()
{
	monsters.push_back(new Monster("Alice"));
	monsters.push_back(new Monster("Bob"));
	monsters.push_back(new Monster("Charlie"));

	for (auto monster : monsters)
		hero.attack(monster);
}
