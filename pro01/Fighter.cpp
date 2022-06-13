#include <iostream>
#include "Fighter.h"

using namespace std;

Fighter::Fighter(void) : Character()
{
    job = "fighter";
    this->setJob(job);
    int sum = str+con;
    this->setHP(sum);
    this->setItem(nullptr);
    this->atk = str;
}

Fighter::~Fighter()
{
    
}

void Fighter::releaseItem(void )
{
    if(this->getItem() != nullptr){
        if(item->getOwner() != nullptr){
            item->setOwner(nullptr);
            this->setItem(nullptr);
            this->setAtk(str);
        }
    }
    return;
}

void Fighter::equipWeapon(void )
{
    int sum=0;
    if(this->getItem() == nullptr){
        this->setAtk(str);
    }else{
        sum= str+(this->getItem()->getAtk());
        this->setAtk(sum);
    }
    return;
}

void Fighter::displayInfo(void )
{
    this->Character::displayInfo();
    cout << "Atk :" << this->getAtk() << endl;
    return; 
}