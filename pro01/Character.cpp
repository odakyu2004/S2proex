#include <iostream>
#include <random>
#include "Character.h"

using namespace std;

Character::Character(void)
{   
    int in = 0;

    random_device seed_gen;
    ranlux24 engine(seed_gen());
    uniform_int_distribution<> dist(1,6);
    
    cout << "Name: ";
    cin>>name;

    while(1){
        str = dist(engine);
        con = dist(engine);
        cout << "str: " << str << " con: " << con << endl;
        cout << "これでよいですか" << endl;
        cin >> in;
        if(in==1){
            break;
        }
    }

    job="standard";
    this->setJob(job);
    int sum = str+con;
    this->setHP(sum);
    this->setItem(nullptr);
}

Character::~Character()
{

}

void Character::getItem(Item * item )
{
    if(this->getItem() == nullptr){
        if(item->getOwner() == nullptr){
            item->setOwner(this);
            this->setItem(item);
        }
    }
    return;
}

void Character::releaseItem(void )
{
    if(this->getItem() != nullptr){
        if(item->getOwner() != nullptr){
            item->setOwner(nullptr);
            this->setItem(nullptr);
        }
    }
    return;
}

void Character::displayInfo(void )
{
    cout << "job :" << this->getJob() << endl;
    cout << "Name :" << this->getName() << endl;
    cout << "Str :" << this->getStr() << " Con :" << this->getCon() << endl;
    cout << "HP :"  << this->getHP() << endl;

    cout << "Item :" ;
    if(this->getItem() == nullptr){
        cout << "none" << endl;
    } else {
        cout << endl;
        this->getItem()->displayInfo();
    }

    return;
}