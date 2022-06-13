#ifndef _FIGHTER_H_
#define _FIGHTER_H_
#include "Character.h"

class Fighter : public Character{
private:
    int atk;
public:
    Fighter(void);
    virtual ~Fighter();
    int getAtk(void){return atk;}
    void setAtk(int atk){this->atk = atk;}
    void equipWeapon(void);
    void releaseItem(void);
    void displayInfo(void);
};

#endif //_FIGHTER_H_