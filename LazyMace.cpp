/* 
 * File:   LazyMace.cpp
 * Author: Noah <nethery.n@gmail.com>
 * 
 * Created on October 7, 2017, 4:00 PM
 */

#include "LazyMace.h"
#include <cstdlib>

// only has a 20% chance of hitting, but very powerful

double LazyMace::hit(double armor) {
	
	int prob = rand() % 5;
	double damage = 0;
	
	if (prob == 0) {
		
		damage = hitPoints - armor;
			if (damage < 0) {
				return 0;
			}
	}
	
	
	return damage;
}
