#include "General_race.h"
#include <unordered_map>
#include <map>
namespace Library_racing
{
	auto General_race::race(const std::string*& TC, int lenght) {
		std::unordered_map<std::string, double>ground{};
		double result;
		camel camel;
		camel_fast camel_fast;
		centaur centaur;
		all_terrain_boots boots;
		magic_carpet magic_carpet;
		eagle eagle;
		broom broom;
		for (int i = 0; i < (sizeof(TC) / sizeof(TC[0])); i++) {
			if (TC[i] == camel.name()) {
				result = lenght / camel.speed();
				if (result > 60) {
					int x = result / 30;
					x *= 8;
					x -= 3;
					if ((lenght / camel.speed()) % 30 == 0) {
						x -= 8;
					}
					result += x;
				}
				else if (result > 30) { result += 5; }
				ground[TC[i]] = result;
			}
			if (TC[i] == camel_fast.name()) {
				result = lenght / camel_fast.speed();
				if (result > 30) {
					int x = result / 10;
					double y = x * 8;
					y -= 4.5;
					if ((lenght / camel.speed()) % 10 == 0) {
						y -= 8;
					}
					result += y;
				}
				else if (result > 20) { result += 11.5; }
				else if (result > 10) { result += 5; }
				ground[TC[i]] = result;
			}
			if (TC[i] == centaur.name()) {
				result = lenght / centaur.speed();
				if (result > 8) {
					int x = result / 8;
					x *= 2;
					if ((lenght / camel.speed()) % 8 == 0) {
						x -= 2;
					}
					result += x;
				}
				ground[TC[i]] = result;
			}
			if (TC[i] == boots.name()) {
				result = lenght / boots.speed();
				if (result > 120) {
					int x = result / 60;
					x *= 5;
					x += 5;
					if ((lenght / camel.speed()) % 60 == 0) {
						x -= 5;
					}
					result += x;
				}
				else if (result > 60) { result += 10; }
				ground[TC[i]] = result;
			}
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