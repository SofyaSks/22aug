#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Item.h"


class Boquet : public Flowers {
	
	

	void chooseFlowers() {
		std::vector <std::string> flowerType = { "Rose", "Sunflower", "Chamomile" };
		std::cout << "Выберете цветок: ";
	}

	void choosePaper() {

	}

	void chooseAccessory() {

	}
};