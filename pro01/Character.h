#ifndef _CHARACTER_H_
#define _CHARACTER_H_
#include <string>
#include "Item.h"

class Item;

using namespace std;

class Character{
protected:
    string name;
    string job;
    int str;
    int con;
    int HP;
    Item * item;
public:
    Character(void);
    virtual ~Character();
    void setItem(Item * item){this->item = item;}
    Item * getItem(void){return item;}
    void getItem(Item * item);
    void setJob(string job){this->job=job;}
    string getJob(void){return job;};
    void setName(string name){this->name = name;}
    string getName(void){return name;}
    void setStr(int str){this->str = str;}
    int getStr(void){return str;}
    void setCon(int con){this->con = con;}
    int getCon(void){return con;}
    void setHP(int HP){this->HP = HP;}
    int getHP(void){return HP;}
    virtual void releaseItem(void);
    virtual void displayInfo(void);
};


#endif //_CHARACTER_H_