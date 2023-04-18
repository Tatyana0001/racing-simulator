#include "Air_race.h"

namespace Library_racing
{
	void Air_race::race(std::unordered_map<std::string, double>& air, int lenght) {
		double result;
		magic_carpet magic_carpet;
		eagle eagle;
		broom broom;
		for (auto const& elem : air) {
			if (elem.first == magic_carpet.name()) {
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
				air[magic_carpet.name()] = result;
			}
			if (elem.first == eagle.name()) {
				result = (lenght * 0.94) / eagle.speed();
				air[eagle.name()] = result;
			}
			if (elem.first == broom.name()) {
				int x = lenght / 1000;
				double y = double(x) / 100;
				result = (lenght * (1 - y)) / broom.speed();
				air[broom.name()] = result;
			}
		}
		return;
	}
}