#include <iostream>
#include "Ground_race.h"
#include "Air_race.h"
#include "General_race.h"
#include <Windows.h>
#include <unordered_map>
#include <vector>
#include <algorithm>

bool sort_race(const std::pair<std::string, double> a, const std::pair<std::string, double> b) {
	return a.second < b.second;
}

std::unordered_map<std::string, double> record_TC(int select_race, int lenght, std::unordered_map<std::string, double>& race, std::string*& all_TC, int& i) {
	int choice = 0;
	switch (select_race) {
	case 1:
		do {
			do {
				std::cout << "Гонка для наземного транспорта. Расстояние: " << lenght << "\n";
				if (i > 0) {
					std::cout << "Зарегистрированные транспортные средства: ";
					for (auto const& elem : race) {
						std::cout << elem.first << " ";
					}
					std::cout << "\n";
				}
				std::cout << " 1. Ботинки-вездеходы\n 2. Метла \n 3. Верблюд\n 4. Кентавр\n 5. Орел\n 6. Верблюд-скороход\n 7. Ковер-самолет\n 0.Закончить регистрацию\nВыберите транспорт или 0 для окончания процесса регистрации: ";
				std::cin >> choice;
				if (choice != 0) {
					if (choice > 7 || choice < 0) { std::cout << "Попытка зарегистрировать несуществующий транспорт! \n"; }
					else {
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
						else if (x == 0) {
							race[all_TC[choice - 1]] = static_cast <double>(0);
							std::cout << all_TC[choice - 1] << " успешно зарегистрирован!\n";
							i++;
						}
					}
				}
			} while (choice != 0);
			if (race.size() == 0 || race.size() == 1) {
				do {
					std::cout << "Должно быть зарегистрировано хотя бы 2 транспортных средства\n";
					std::cout << " 1. Зарегистрировать транспорт\nВыберите действие: ";
					std::cin >> choice;
				} while (choice != 1);
			}
		} while (race.size()<2);
		break;
	case 2:
		do {
			do {
				std::cout << "Гонка для воздушного транспорта. Расстояние: " << lenght << "\n";
				if (i > 0) {
					std::cout << "Зарегистрированные транспортные средства: ";
					for (auto const& elem : race) {
						std::cout << elem.first << " ";
					}
					std::cout << "\n";
				}
				std::cout << " 1. Ботинки-вездеходы\n 2. Метла \n 3. Верблюд\n 4. Кентавр\n 5. Орел\n 6. Верблюд-скороход\n 7. Ковер-самолет\n 0.Закончить регистрацию\nВыберите транспорт или 0 для окончания процесса регистрации: ";
				std::cin >> choice;
				if (choice != 0) {
					if (choice > 7 || choice < 0) { std::cout << "Попытка зарегистрировать несуществующий транспорт! \n"; }
					else {
						int x = 0;
						for (auto const& elem : race) {
							if (all_TC[choice - 1] == elem.first) {
								std::cout << all_TC[choice - 1] << " уже зарегистрирован!\n";
								x++;
							}
						}
						if ((choice == 1) || (choice == 3) || (choice == 4) || (choice == 6)) {
							std::cout << "Попытка зарегистрировать неправильный тип транспортного средства\n";
						}
						else if (x == 0) {
							race[all_TC[choice - 1]] = static_cast <double>(0);
							std::cout << all_TC[choice - 1] << " успешно зарегистрирован!\n";
							i++;
						}
					}
				}
			} while (choice != 0);
			if (race.size() == 0 || race.size() == 1) {
				do {
					std::cout << "Должно быть зарегистрировано хотя бы 2 транспортных средства\n";
					std::cout << " 1. Зарегистрировать транспорт\nВыберите действие: ";
					std::cin >> choice;
				} while (choice != 1);
			}
		} while (race.size() < 2);
		break;
	case 3:
		do {
			do {
				std::cout << "Гонка для наземного и воздушного транспорта. Расстояние: " << lenght << "\n";
				if (i > 0) {
					std::cout << "Зарегистрированные транспортные средства: ";
					for (auto const& elem : race) {
						std::cout << elem.first << " ";
					}
					std::cout << "\n";
				}
				std::cout << " 1. Ботинки-вездеходы\n 2. Метла \n 3. Верблюд\n 4. Кентавр\n 5. Орел\n 6. Верблюд-быстроход\n 7. Ковер-самолет\n 0.Закончить регистрацию\nВыберите транспорт или 0 для окончания процесса регистрации: ";
				std::cin >> choice;
				if (choice != 0) {
					if (choice > 7 || choice < 0) { std::cout << "Попытка зарегистрировать несуществующий транспорт! \n"; }
					else {
						int x = 0;
						for (auto const& elem : race) {
							if (all_TC[choice - 1] == elem.first) {
								std::cout << all_TC[choice - 1] << " уже зарегистрирован!\n";
								x++;
							}
						}
						if (x == 0) {
							race[all_TC[choice - 1]] = static_cast <double>(0);
							std::cout << all_TC[choice - 1] << " успешно зарегистрирован!\n";
							i++;
						}
					}
				}
			} while (choice != 0);
			if (race.size() == 0 || race.size() == 1) {
				do {
					std::cout << "Должно быть зарегистрировано хотя бы 2 транспортных средства\n";
					std::cout << " 1. Зарегистрировать транспорт\nВыберите действие: ";
					std::cin >> choice;
				} while (choice != 1);
			}
		} while (race.size() < 2);
		break;
	default:
		std::cout << "Неизвестное транспортное средство!\n";
		break;
	}
	return race;
}

void race_result(int select_race, int lenght, std::unordered_map<std::string,double> &race) {
	switch (select_race) {
	case 1:
		Library_racing::Ground_race ground_race;
		ground_race.race(race, lenght);
		break;
	case 2:
		Library_racing::Air_race air_race;
		air_race.race(race, lenght);
		break;
	case 3:
		Library_racing::General_race general_race;
		general_race.race(race, lenght);
		break;
	default:
		break;
	}
	std::vector<std::pair<std::string, double>> Race(race.begin(), race.end());
	std::sort(Race.begin(), Race.end(), sort_race);
	int x = 1;
	std::cout << "Результаты гонки:\n";
	for(auto const& elem : Race) {
		std::cout << " " << x << ". " << elem.first << ". Время: " << elem.second << "\n";
		x++;
	}
	std::cout << "\n";
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::unordered_map<std::string, double> race;
	std::string* all_TC = new std::string[7]{ "Ботинки-вездеходы", "Метла", "Верблюд", "Кентавр", "Орел", "Верблюд-быстроход", "Ковер-самолет" };
	int select_race, lenght, choice;
	std::cout << "Добро пожаловать в гоночный симулятор!\n";
	do {
		std::cout << " 1. Гонка для наземного транспорта \n" << " 2. Гонка для воздушного транспорта\n" << " 3. Гонка для наземного и воздушного транпорта \n" <<  "Выберите тип гонки : ";
		std::cin >> select_race;
		std::cout << "Укажите длину дистанции (должна быть положительна): ";
		std::cin >> lenght;
		std::cout << "Должно быть зарегистрировано хотя бы два транспортных средства\n 1. Зарегистрировать транспорт\nВыберите действие: ";
		std::cin >> choice;
		race.clear();
		int i = 0;
			record_TC(select_race, lenght, race, all_TC, i);
		do {
			std::cout << " 1.Зарегистрировать транспорт\n 2. Начать гонку\nВыберите действие: ";
			std::cin >> choice;
			if (choice == 1) {
				record_TC(select_race, lenght, race, all_TC, i);
			}
			else if (choice != 1 && choice != 2) {
				std::cout << "Неправильный выбор!\n";
			}
		} while (choice != 2);
		race_result(select_race, lenght, race);
		std::cout << " 1. Провести еще одну гонку\n 2. Выйти\nВыберите действие: ";
		std::cin >> choice;
	} while (choice != 2);
	delete[] all_TC;
	return 0;
}