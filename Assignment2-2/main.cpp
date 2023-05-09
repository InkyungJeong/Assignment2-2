#include <iostream>
#include <fstream>
#include "FC.h"
#include "CITY.h"
using namespace std;

int main() {
	CITY seoul((char*)"Seoul.txt");
	cout << "Seoul" << endl;
	for (int i = 0; i < 12; i++) {
		seoul.CF[i].f = seoul.CF[i].getF();
		cout << seoul.CF[i].f << endl;
	}
}