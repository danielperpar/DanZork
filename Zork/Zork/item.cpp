#include "item.h"
#include "globals.h"

Item::Item(
	Entity *pnt,
	ItemSize size,
	bool isOpen,
	Type type,
	const std::string &name,
	const std::string &desc,
	std::list<Entity*> list) : parent(pnt), size(size), isOpen(isOpen),  Entity(type, name, desc, list) {}

Item::~Item()
{
	RELEASE(parent);
}
