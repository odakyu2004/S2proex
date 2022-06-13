#ifndef _SWORD_H_
#define _SWORD_H_
#include "Item.h"

class Sword : public Item{
private:
    int pAt;
public:
    Sword(void);
    Sword(int pAt);
    Sword(string name);
    Sword(string name,int pAt);
    virtual ~Sword();
    void setPAt(int pAt){this->pAt = pAt;}
    int getPAt(void){return pAt;}
    void displayInfo(void);
};

#endif //_SWORD_H_