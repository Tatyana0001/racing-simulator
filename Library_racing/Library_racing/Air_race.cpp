#include "Air_race.h"
#include <unordered_map>
#include <map>

namespace Library_racing
{
	auto Air_race::race(const std::string*& TC, int lenght) {
		std::unordered_map<std::string, double>ground{};
		double result;
		magic_carpet magic_carpet;
		eagle eagle;
		broom broom;
		for (int i = 0; i < (sizeof(TC) / sizeof(TC[0])); i++) {
			if (TC[i] == magic_carpet.name()) {
				if (lenght >= 10000) {
					result = (lenght * 0.95) / magic_carpet.speed();
				}
				else if (lenght >= 5000) {
					result = (lenght * 0.9) / magic_carpet.speed();
				}
				else if (lenght >= 1000) {
					result = (lenght * 0.97) / magic_carpet.speed();
				}
				else {
					result = lenght / magic_carpet.speed();
				}
				ground[TC[i]] = result;
			}
			if (TC[i] == eagle.name()) {
				result = (lenght * 0.94) / eagle.speed();
				ground[TC[i]] = result;
			}
			if (TC[i] == broom.name()) {
				int x = lenght / 1000;
				double y = x / 100;
				result = (lenght * (1 - y)) / broom.speed();
				ground[TC[i]] = result;
			}
		}
		return ground;
	}
}