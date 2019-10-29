#include "Monster.h"
#include <memory>

class Hero
{
public:
	void attack(const Monster* monster) const;
	void attack(std::shared_ptr<Monster> monster);
	void attack(std::unique_ptr<Monster>& monster);

private:
	int level;
};
