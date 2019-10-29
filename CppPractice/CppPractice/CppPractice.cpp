#include "Monster.h"
#include "Hero.h"
#include <vector>
#include <memory>
using namespace std;

Hero hero;

void rawPtr();
void sharedPtr();
void uniquePtr();

int main()
{
	uniquePtr();
}

void rawPtr()
{
	vector<Monster*> monsters;
	monsters.push_back(new Monster("Alice"));
	monsters.push_back(new Monster("Bob"));
	monsters.push_back(new Monster("Charlie"));

	for (auto monster : monsters)
	{
		hero.attack(monster);
		delete monster;
	}
}

void sharedPtr()
{
	vector<shared_ptr<Monster>> monsters;
	monsters.push_back(make_shared<Monster>("Alice"));
	monsters.push_back(make_shared<Monster>("Bob"));
	monsters.push_back(make_shared<Monster>("Charlie"));

	for (auto monster : monsters)
	{
		hero.attack(monster);
	}
}

void uniquePtr()
{
	vector<unique_ptr<Monster>> monsters;
	monsters.push_back(make_unique<Monster>("Alice"));
	monsters.push_back(make_unique<Monster>("Bob"));
	monsters.push_back(make_unique<Monster>("Charlie"));

	for (auto& monster : monsters)
	{
		hero.attack(monster);
	}
}
