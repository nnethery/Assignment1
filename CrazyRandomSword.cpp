/* 
 * File:   CrazyRandomSword.cpp
 * Author: Noah <nethery.n@gmail.com>
 * 
 * Created on October 7, 2017, 4:00 PM
 */

#include "CrazyRandomSword.h"
#include <cstdlib>

double CrazyRandomSword::hit(double armor) {
	
	int i = rand() % ((armor / 2) + 1);
	
	double damage = hitPoints - (armor - i);
	if (damage < 0) {
		return 0;
	}
	return damage;
}
