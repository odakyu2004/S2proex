#ifndef _ITEM_H_
#define _ITEM_H_
#include <string>
#include "Character.h"

class Character;

using namespace std;

class Item {
private:
    static int maxID;
    int ID;
    void setID(int ID){this->ID =ID;}
protected:
    string name;
    int atk;
    int def;
    Character * owner;
public:
    Item(void);
    Item(string name);
    virtual ~Item();

    int getID(void) const {return ID;}
    void setName(string name){this->name = name;}
    string getName(void){return name;}
    void setAtk(int atk){this->atk = atk;}
    int getAtk(void){return atk;}
    void setDef(int def){this->def = def;}
    int getDef(void){return def;}
    void setOwner(Character * owner){this->owner =owner;}
    Character * getOwner(void){return owner;}
    virtual void displayInfo(void) =0;
};
#endif //_ITEM_H_

