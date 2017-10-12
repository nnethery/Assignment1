/* 
 * File:   SimpleAxe.h
 * Author: Noah <nethery.n@gmail.com>
 * 
 * Created on October 7, 2017, 4:00 PM
 */

#include <string>
#include "Weapon.h"

#ifndef SIMPLEAXE_H
#define SIMPLEAXE_H

class SimpleAxe : public Weapon {
public:

	SimpleAxe() : Weapon("Simple axe", 60.0) {
	}
	virtual ~SimpleAxe() {}; 
	virtual double hit(double armor);

};

#endif /* SIMPLEAXE_H */