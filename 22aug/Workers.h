#pragma once
#include <iostream>
#include <string>
#include <vector>

class Worker {
public:
	std::string getName() {
		return name;
	}

	void setName(std::string name_x) {
		name = name_x;
	}

	int getSalary() {
		return salary;
	}

	void setSalary(int salary_x) {
		salary = salary_x;
	}


	void showAllInfo() {
		std::vector <Worker> Info;
	}

	/*std::string*/ void choosePosition() {
		std::vector<std::string> Position = {"Флорист", "Менеджер", "Директор"};
		std::vector<std::string>::iterator it; 
		std::cout << "Выберите должность: \n";
		for (std::vector<std::string>::iterator it = Position.begin(),int i=1; it != Position.end();i++, it++) {
			std::cout << i << *it << std::endl;
		}
		int choice;
		std::cin >> choice;
		//while (choice > Position.begin() && choice < Position.end()){}
		if (choice == 1) {
			std::cout << "Выбрана должность: ";
			it = Position.begin();
			std::cout << *it << std::endl;
			position = *it;
			//return *it;
			
		}
		else
			if (choice == 2) {
				std::cout << "Выбрана должность: ";
				it = Position.begin() + 1;
				std::cout << *it << std::endl;
				position = *it;
				//return *it;
			}
			else
				if (choice == 3) {
					std::cout << "Выбрана должность: ";
					it = Position.begin() + 2;
					std::cout << *it << std::endl;
					position = *it;
					//return *it;
				}
				else {
					std::cout << "error";
					//return "-1";
				}
		
	}
	

	void addWorker() {
		std::cout << "Добавьте нового работника:\n";
		choosePosition();
		std::cout << "ФИО: ";
		std::cin.get();
		std::getline(std::cin, name,'\n');
		std::cout << "Зарплата: ";
		std::cin >> salary;
	}



	void IdGenerator() {

	}

private:
	int salary;
	std::string name;
	int countWorker;
	std::string position;
};

class Search {

	void searchByID() {

	}

	void searchByName() {

	}

	void searchByPosition() {

	}
};