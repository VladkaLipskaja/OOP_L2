#include "Source.h"
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main()
{
	system("color F0");
	string s;
	string length;
	string height;
	string depth;
	bool menu = true;
	cout << " step C, \n  classes: 'parallelepiped, rectangular_parallelepiped, rhombohedron, cube',for every a method" << endl;
	cout << "Example:" << endl;
	rectangular_parallelepiped *rect = new rectangular_parallelepiped(5.0, 7.0, 8.0);
	rhombohedron *rhomboedron = new rhombohedron(5.0, 7.0);
	cube *cubes = new cube(5.0);
	rect->square();
	rhomboedron->square();
	cubes->square();
	while (menu) {
		cout << "Choose 1-rectangular_parallelepiped, 2-rhombohedron, 3-cube: " << endl;
		cin >> s;
		switch (atoi(s.c_str())) {
		case 1: {cout << "Input 3 dimensions please:" << endl;
			cin >> length;
			cin >> depth;
			cin >> height;
			rectangular_parallelepiped *rect = new rectangular_parallelepiped(stod(length), stod(depth), stod(height));
			rect->square();
			break;}
		case 2: {cout << "Input 2 dimensions please:" << endl;
			cin >> length;
			cin >> depth;
			rhombohedron *rhomboedron = new rhombohedron(stod(length), stod(depth));
			rhomboedron->square();break;}
		default: {cout << "Input 1 dimension please:" << endl;
			cin >> length;
			cube *cubes = new cube(5.0);
			cubes->square();}
		}
		cout << "Continue? (1/0)";
		cin >> s;
		if (s == "1") menu = true;
		else menu = false;
	}
	system("pause");
}
