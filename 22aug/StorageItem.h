#pragma once
#include <iostream>
#include "Item.h"

class StorageItem : public Item {

	std::string getCompanyName() {
		return company;
	}

	void setCompanyName(std::string company_x) {
		company = company_x;
	}

	std::string getCode() {
		return code;
	}

	void setcode(std::string code_x) {
		code = code_x;
	}

	int getTotalAmount() {
		return totalAmount;
	}

	void setTotalAmount(int totalAmount_x) {
		totalAmount = totalAmount_x;
	}

	double getPriceForOne() {
		return priceForOne;
	}

	void setPriceForOne(double priceForOne_x) {
		priceForOne = priceForOne_x;
	}


	double getTotalPrice() {
		std::cout << priceForOne * totalAmount;
	}

private:
	std::string company;
	std::string code;
	int totalAmount;
	double priceForOne;
	double totalPrice;
};
