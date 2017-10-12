/* 
 * File:   SimpleAxe.cpp
 * Author: Noah <nethery.n@gmail.com>
 * 
 * Created on October 7, 2017, 4:00 PM
 */

#include "SimpleAxe.h"

double SimpleAxe::hit(double armor) {
	if (armor < 20 && armor > 0) {
		armor = 0;
	}
	
	double damage = hitPoints - armor;
	
	if (damage < 0) {
		return 0;
	}
	return damage;
}
