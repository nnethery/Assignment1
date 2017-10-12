/* 
 * File:   CrazyRandomSword.h
 * Author: Noah <nethery.n@gmail.com>
 * 
 * Created on October 7, 2017, 4:00 PM
 */

#include <string>
#include "Weapon.h"
#include <cstdlib>

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

class CrazyRandomSword : public Weapon {
public:

	int i = rand() % 91 + 10;

	CrazyRandomSword() : Weapon("Crazy random sword", i) {
	}
	virtual ~CrazyRandomSword() {}; 
	virtual double hit(double armor);

};

#endif /* CRAZYRANDOMSWORD_H */