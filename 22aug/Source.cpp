#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>

#include "Workers.h"

int main() {
	setlocale(LC_ALL, "ru");


	std::cout << "����: \n";
	std::cout << "1 - ���������\n";
	std::cout << "2 - �����\n";
	std::cout << "3 - ������\n";
	std::cout << "4 - ������\n";

		
	int choice;
	std::cin >> choice;
	Worker* man = new Worker;

	switch (choice) {
	case 1:
		system("cls");
		std::cout << "1 - �������� ���������\n";
		std::cout << "2 - ������� ���������\n";
		std::cout << "3 - �������� ���������� � ���������\n";
		std::cout << "4 - ������ ���� ����������\n";

		int workerChoice;
1		std::cin >> workerChoice;

		

		switch (workerChoice) {
		case 1:
			system("cls");
			man->addWorker();
			std::cout << "����� �������� ��� ������, ������� - 0; ��� ������ � ���� ������� - 1";
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
			std::cout << "������\n";
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
		std::cout << "������\n";
		break;
	}




	return 0;
}




// ��� ������� ���� ����������� namespace
// ��� ��������, ���, ���������� � ��������
// �����, �������, ������
// ����, ��������