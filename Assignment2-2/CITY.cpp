#include "CITY.h"
#include <iostream>
#include <fstream>
using namespace std;

CITY::CITY(char* a) {
	ifstream xx(a);
	for (int i = 0; i < 12; i++) {
		xx >> CF[i].c;
	}
	xx.close();

}
