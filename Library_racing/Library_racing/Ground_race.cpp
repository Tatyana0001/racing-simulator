#include "Ground_race.h"

namespace Library_racing
{
	void Ground_race::race(std::unordered_map<std::string, double>&ground, int lenght){
		double result;
		camel camel;
		camel_fast camel_fast;
		centaur centaur;
		all_terrain_boots boots;
		for (auto const& elem : ground) {
			if (elem.first == camel.name()) {
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
				ground[camel.name()] = result;
			}
			if (elem.first == camel_fast.name()) {
				result = lenght / camel_fast.speed();
				if (result > 30) {
					int x = result / 10;
					double y = x * 8;
					y -= 4.5;
					if ((lenght / camel_fast.speed()) % 10 == 0) {
						y -= 8;
					}
					result += y;
				}
				else if (result > 20) { result += 11.5; }
				else if (result > 10) { result += 5; }
				ground[camel_fast.name()] = (double)result;
			}
			if (elem.first == centaur.name()) {
				result = lenght / centaur.speed();
				if (result > 8) {
					int x = result / 8;
					x *= 2;
					if ((lenght / centaur.speed()) % 8 == 0) {
						x -= 2;
					}
					result += x;
				}
				ground[centaur.name()] = result;
			}
			if (elem.first == boots.name()) {
				result = lenght / boots.speed();
				if (result > 120) {
					int x = result / 60;
					x *= 5;
					x += 5;
					if ((lenght / boots.speed()) % 60 == 0) {
						x -= 5;
					}
					result += x;
				}
				else if (result > 60) { result += 10; }
				ground[boots.name()] = result;
			}
		}
		return;
	}
}