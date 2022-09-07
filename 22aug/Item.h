#pragma once
#include <string>

class Item {
	void setPrice(int price_x) {
		price = price_x;
	}

	int getPrice() {
		return price;
	}

	void setAvailability(bool availability_x) {
		availability = availability_x;
	}

	bool getAvailability() {
		return availability;

	}

	std::string getColor() {
		return color;
	}

	void setColor(std::string color_x) {
		color = color_x;
	}

	void CheckAvailability() {
		
	}

private:
	int price;
	bool availability;
	std::string color;
};

class Flowers : public Item {

	std::string getType() {
		return type;
	}

	void setType(std::string type_x) {
		type = type_x;
	}

private:
	std::string type;
};


class Toys : public Item {
	std::string getType() {
		return type;
	}

	void setType(std::string type_x) {
		type = type_x;
	}

	int getSize() {
		return size;
	}

	void setSize(int size_x) {
		size = size_x;
	}


private:
	std::string type;
	int size;
};