#include "Ground_race.h"
#include <vector>
#include <algorithm>

namespace Library_racing
{
	//bool Ground_race::sort_race(const std::pair<std::string, int> a, const std::pair<std::string, int> b) {
		//return a.second > b.second;
	//}

	void Ground_race::race(std::string *&TC, std::unordered_map<std::string, double>ground, int lenght){
		//std::unordered_map<std::string, double>ground{};
		double result;
		camel camel;
		camel_fast camel_fast;
		centaur centaur;
		all_terrain_boots boots;
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
				} else if (result > 30) { result += 5; }
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
		}
		//std::vector<std::pair<std::string, int>> GroundRace(ground.begin(), ground.end());
	//	std::sort(GroundRace.begin(), GroundRace.end(), sort_race);
		//return GroundRace;
		return;
	}
}