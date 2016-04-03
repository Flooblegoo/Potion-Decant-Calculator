// Potion Decant Calculator
// Pinched and slightly edited from user T7 Press 7T on Sythe forums
// URL: http://www.sythe.org/programming-general/1408342-potion-decant-calculator.html

#include "stdafx.h"
#include <iostream>

int main() {

	int potAmount;
	int counter = 0;
	int pot4 = 0, pot3, pot2 = 0, pot1 = 0, pot0 = 0, currPot = 3;

	std::cout << "Please enter the total potion amount: ";
	std::cin >> potAmount;
	pot3 = potAmount;

	for (int loop = 0; loop < potAmount; loop++) {
		switch (currPot) {
		case 3:
			currPot--;
			pot4++;
			pot3--;
			pot2++;
			break;
		case 2:
			currPot--;
			pot4++;
			pot2--;
			pot1++;
			break;
		case 1:
			currPot--;
			pot4++;
			pot1--;
			break;
		case 0:
			currPot = 3;
			pot0++;
			break;
		}
	}

	std::cout << "You have " << pot4 << " 4 dose potions." << std::endl;
	std::cout << "You have " << pot2 << " 2 dose potions." << std::endl;
	std::cout << "You have " << pot1 << " 1 dose potions." << std::endl;
	std::cout << "You have " << pot0 << " empty vials" << std::endl;

	std::cin.ignore(std::numeric_limits<std::streamsize>::max());
	std::cin.get();
	return 0;
}

