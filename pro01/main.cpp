/* main.cpp
 * コンパイル方法
 * g++ -Wall -o pro01 Character.cpp Fighter.cpp Item.cpp Sword.cpp main.cpp
 * 実行方法
 * ./pro01
 * 実行後,もし Character のインスタンスが生成された場合は,パラメータを決めてよいか,
 * 聞かれる場合があります. 1で決定,それ以外でやり直しです.
 * Copyright (c) 2022, Y.Suzuki, S.Okeda.
 */
#include <iostream>
#include "Character.h"
#include "Fighter.h"
#include "Sword.h"

using namespace std;

void displayInfo(Sword *, Sword *, Character *, Fighter *);

int main()
{
  Sword sword1(2);
  Sword sword2("Stormbringer",4);

  Character pc1;
  Fighter pc2;

  cout << "初期状態確認" << endl;
  displayInfo(&sword1, &sword2, &pc1, &pc2);
  
  cout << "pc1 が sword1 を所持する" << endl;
  pc1.getItem(&sword1);
  displayInfo(&sword1, &sword2, &pc1, &pc2);


  cout << "pc1 が sword1 を所持状態で sword2 を所持する (複数所持できない)" << endl;
  pc1.getItem(&sword2);
  displayInfo(&sword1, &sword2, &pc1, &pc2);

  cout << "pc1 が sword1 を捨てる" << endl;
  pc1.releaseItem();
  displayInfo(&sword1, &sword2, &pc1, &pc2);


  cout << "pc2 が sword1 を所持する" << endl;
  pc2.getItem(&sword1);
  displayInfo(&sword1, &sword2, &pc1, &pc2);

  cout << "pc2 が sword1 を装備する" << endl;
  pc2.equipWeapon();
  displayInfo(&sword1, &sword2, &pc1, &pc2);

  cout << "pc2 が sword1 を捨てる" << endl;
  pc2.releaseItem();
  displayInfo(&sword1, &sword2, &pc1, &pc2);
  
  return 0;
}

void displayInfo(Sword * s1, Sword * s2, Character * pc1, Fighter * pc2)
{
  cout << "---" << endl;
  s1->displayInfo();
  cout << endl;
  s2->displayInfo();
  cout << "---" << endl;
  pc1->displayInfo();
  cout << endl;
  pc2->displayInfo();

  cout << endl;
  cout << endl;

  return;
}