#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>

#include "Workers.h"

int main() {
	setlocale(LC_ALL, "ru");


	std::cout << "Меню: \n";
	std::cout << "1 - Работники\n";
	std::cout << "2 - Склад\n";
	std::cout << "3 - Товары\n";
	std::cout << "4 - Услуги\n";

		
	int choice;
	std::cin >> choice;
	Worker* man = new Worker;

	switch (choice) {
	case 1:
		system("cls");
		std::cout << "1 - Добавить работника\n";
		std::cout << "2 - Удалить работника\n";
		std::cout << "3 - Показать информацию о работнике\n";
		std::cout << "4 - Список всех работников\n";

		int workerChoice;
1		std::cin >> workerChoice;

		

		switch (workerChoice) {
		case 1:
			system("cls");
			man->addWorker();
			std::cout << "Чтобы добавить ещё одного, введите - 0; Для выхода в меню введите - 1";
			bool continuation;

			std::cin >> continuation;
			if (continuation == 0) {
				man->addWorker();
			}
			else
				if (continuation == 1) {
					break;
				}
				else
					std::cout << "Error.";
			break;


		case 2:
			system("cls");

			break;

		case 3:
			system("cls");
			//man->showFullInfo();
			break;

		case 4:
			system("cls");
			man->choosePosition();

			break;

		default:
			std::cout << "ОШИБКА\n";
			break;
		}

		break;

	case 2:
		system("cls");

		break;

	case 3:
		system("cls");

		break;

	case 4:
		system("cls");

		break;

	default:
		std::cout << "ОШИБКА\n";
		break;
	}




	return 0;
}




// для каждого слоя собственный namespace
// три флориста, ФИО, информация о зарплате
// цветы, медведи, услуги
// поля, действия