/* 
 * File:   LazyMace.h
 * Author: Noah <nethery.n@gmail.com>
 * 
 * Created on October 7, 2017, 4:00 PM
 */

#include <string>
#include "Weapon.h"

#ifndef LAZYMACE_H
#define LAZYMACE_H

class LazyMace : public Weapon {
public:

	// only has a 20% chance of hitting, but very powerful
	
	LazyMace() : Weapon("Lazy mace", 90.0) {
	}
	virtual ~LazyMace() {}; 
	virtual double hit(double armor);

};

#endif /* LAZYMACE_H */