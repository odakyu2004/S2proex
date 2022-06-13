#include <iostream>
#include "Item.h"

using namespace std;

int Item::maxID = 1;

Item::Item(void)
{
    this->Item::setID(Item::maxID++);
    this->Item::setOwner(nullptr);
    this->Item::setAtk(1);
    this->Item::setDef(1);
}

Item::Item(string name)
{
    this->Item::setID(Item::maxID++);
    this->Item::setOwner(nullptr);
    this->Item::setAtk(1);
    this->Item::setDef(1);
    this->Item::setName(name);
}

Item::~Item()
{

}
