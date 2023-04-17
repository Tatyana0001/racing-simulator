#include <iostream>
#include "Ground_race.h"
#include "Air_race.h"
#include "General_race.h"
#include <Windows.h>
#include <unordered_map>
#include <map>
//#include <vector>
#include <algorithm>
//#include <variant>

std::unordered_map<std::string, double> record_TC(int &select_race, int &lenght, /*std::string* TC,*/std::unordered_map<std::string, double> &race, std::string*& all_TC, int& i) {
	//try {
		int choice = 0;
		switch (select_race) {
		case 1:
			do {
				std::cout << "Гонка для наземного транспорта. Расстояние: " << lenght << "\n";
				if (i > 0) {
					std::cout << "Зарегистрированные транспортные средства: ";
					for (auto const& elem : race) {
						std::cout << elem.first << " ";
					}
					std::cout << "\n";
					//for (int j = 0; j < 4; j++) { std::cout << TC[j] << " \n"; }
				}
				std::cout << " 1. Ботинки-вездеходы\n 2. Метла \n 3. Верблюд\n 4. Кентавр\n 5. Орел\n 6. Верблюд-скороход\n 7. Ковер-самолет\n 0.Закончить регистрацию\n Выберите транспорт или 0 для окончания процесса регистрации: ";
				std::cin >> choice;
				int x = 0;
				for (auto const& elem : race) {
					if (all_TC[choice - 1] == elem.first) {
						std::cout << all_TC[choice - 1] << " уже зарегистрирован!\n";
						x++;
					}
				}
				if ((choice == 2) || (choice == 5) || (choice == 7)) {
					std::cout << "Попытка зарегистрировать неправильный тип транспортного средства\n";
				}
				/*else if (all_TC[choice - 1] == TC[i - 1] || all_TC[choice - 1] == TC[i - 2]) {
					std::cout << all_TC[choice - 1] << " уже зарегистрирован!\n";
				}*/
				else if (x == 0) {
					//TC[i] = all_TC[choice - 1];
					race[all_TC[choice - 1]] = static_cast <double>(0);
					std::cout << all_TC[choice - 1] << " успешно зарегистрирован!\n";
					//std::cout << TC[i] << " успешно зарегистрирован!\n";
					i++;
				}
			} while (choice != 0);
			break;
			/*case 2:
				do {
					std::cout << "Гонка для воздушного транспорта. Расстояние: " << lenght << "\n";
					if (i > 0) {
						std::cout << "Зарегистрированные транспортные средства: ";
						for (int j = 0; j < (sizeof(TC) / sizeof(TC[0])); j++) { std::cout << j << " \n"; }
					}
					std::cout << " 1. Ботинки-вездеходы\n 2. Метла \n 3. Верблюд\n 4. Кентавр\n 5. Орел\n 6. Верблюд-скороход\n 7. Ковер-самолет\n 0.Закончить регистрацию\n Выберите транспорт или 0 для окончания процесса регистрации: ";
					std::cin >> choice;
					for (int j = 0; j < (sizeof(TC) / sizeof(TC[0])); j++) {
						if (all_TC[choice - 1] == TC[j]) {
							std::cout << all_TC[choice - 1] << " уже зарегистрирован!\n";
						}
						else if ((choice == 1) || (choice == 3) || (choice == 4) || (choice == 6)) {
							std::cout << "Попытка зарегистрировать неправильный тип транспортного средства\n";
						}
						else {
							TC[i] = all_TC[choice - 1];
							std::cout << TC[i] << "успешно зарегистрирован!\n";
							i++;
						}
					}
				} while (choice != 0);
				break;
			case 3:
				do {
					std::cout << "Гонка для наземного и воздушного транспорта. Расстояние: " << lenght << "\n";
					if (i > 0) {
						std::cout << "Зарегистрированные транспортные средства: ";
						for (int j = 0; j < (sizeof(TC) / sizeof(TC[0])); j++) { std::cout << j << " \n"; }
					}
					std::cout << " 1. Ботинки-вездеходы\n 2. Метла \n 3. Верблюд\n 4. Кентавр\n 5. Орел\n 6. Верблюд-скороход\n 7. Ковер-самолет\n 0.Закончить регистрацию\n Выберите транспорт или 0 для окончания процесса регистрации: ";
					std::cin >> choice;
					for (int j = 0; j < (sizeof(TC) / sizeof(TC[0])); j++) {
						if (all_TC[choice - 1] == TC[j]) {
							std::cout << all_TC[choice - 1] << " уже зарегистрирован!\n";
						}
						else {
							TC[i] = all_TC[choice - 1];
							std::cout << TC[i] << "успешно зарегистрирован!\n";
							i++;
						}
					}
				} while (choice != 0);
				break;*/
		default:
			std::cout << "Неизвестное транспортное средство!\n";
			break;
		}return race;
	//	return;// TC;
	//}catch(const std::exception ex) {
	//	std::cout << "General error" << ex.what() << "\n";
	//}
}

void race_result(int select_race, int lenght, std::unordered_map<std::string,double> race) {
	//race.clear();
	//for (int j = 0; j < (sizeof(TC) / sizeof(TC[0])); j++) {
	//	race[TC[j]] = 0;
	//}
	switch (select_race) {
	case 1:
		Library_racing::Ground_race ground_race;
		//ground_race.race(TC, race, lenght);
		break;
	case 2:
		//Library_racing::Air_race * air_race;
		break;
	case 3:
		//Library_racing::Ground_race * ground_race;
		//Library_racing::Air_race* air_race;
		break;
	default:
		break;
	}
	int x = 1;
	std::cout << "Результаты гонки:\n";
	//for (int j = 0; j < (sizeof(TC) / sizeof(TC[0])); j++) {
		//std::cout << x << ". " << TC[j] << ". Время: " << result << "\n";
		x++;
	//}
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::unordered_map<std::string, double> race;
	//std::string* TC = new std::string[7];
	std::string* all_TC = new std::string[7]{ "Ботинки-вездеходы", "Метла", "Верблюд", "Кентавр", "Орел", "Верблюд-скороход", "Ковер-самолет" };
	int select_race, lenght, choice;
	std::cout << "Добро пожаловать в гоночный симулятор!\n";
	do {
		std::cout << "1. Гонка для наземного транспорта \n" << "2. Гонка для воздушного транспорта\n" << "3. Гонка для наземного и воздушного транпорта \n" <<  "Выберите тип гонки : ";
		std::cin >> select_race;
		std::cout << "Укажите длину дистанции (должна быть положительна): ";
		std::cin >> lenght;
		std::cout << "Должно быть зарегистрировано хотя бы два транспортных средства\n 1. Зарегистрировать транспорт\n Выберите действие: ";
		std::cin >> choice;
		race.clear();
		//TC = nullptr;
		int i = 0;
		record_TC(select_race, lenght, race, all_TC, i);
		do {
			std::cout << "1.Зарегистрировать транспорт\n 2. Начать гонку\n Выберите действие: ";
			std::cin >> choice;
			if (choice == 1) {
				record_TC(select_race, lenght, race, all_TC, i);
			}
		} while (choice != 2);
		race_result(select_race, lenght, race);
		std::cout << " 1. Провести еще одну гонку\n 2. Выйти\n Выберите действие: ";
		std::cin >> choice;
	} while (choice != 2);
	//delete[] TC;
	delete[] all_TC;
	return 0;
}