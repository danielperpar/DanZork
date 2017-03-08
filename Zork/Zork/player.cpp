#include "player.h"
#include "entity.h"
#include "globals.h"

class Room;
Player::Player(
	Room *loc,
	Type type,
	const std::string &name,
	const std::string &desc,
	std::list<Entity*> list
	) : location(loc), Entity(type, name, desc, list) {}

Player::~Player()
{
	RELEASE(location);
}