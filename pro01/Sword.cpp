#include <iostream>
#include "Sword.h"

using namespace std;

Sword::Sword(void)
{
    atk +=pAt;
    this->setPAt(0);
}

Sword::Sword(int pAt)
{
    atk +=pAt;
    this->setPAt(pAt);

}

Sword::Sword(string name): Item::Item(name)
{
    atk +=pAt;
    this->setPAt(pAt);
}


Sword::Sword(string name,int pAt) : Item(name)
{
    atk +=pAt;
    this->setPAt(pAt);
}

Sword::~Sword()
{

}

void Sword::displayInfo(void )
{
    cout << "Sword :";
    if(name.length() != 0){
        cout << this->getName();
    }
    cout << endl;

    cout << "plus attack : " << this->getPAt() << endl;

    cout << "Owner : " ;
    if(this->getOwner() != nullptr ){
        cout << this->getOwner()->getName() << endl;
    } else {
        cout << "none" << endl;
    }
    
    return;
}