
#include <iostream>
#include "Source.h"
using namespace std;
parallelepiped::parallelepiped(double length1, double width1, double depth1) :length(length1), width(width1), depth(depth1) {
	cout << "Your shape have such lengthes " << length << ", " << width << ", " << depth << endl;
};
rectangular_parallelepiped::rectangular_parallelepiped(double height1, double width1, double depth1) :parallelepiped(height1, width1, depth1) {};
void rectangular_parallelepiped::square() { cout << "Your square is: " << 2 * (length*width + length*depth + width*depth) << endl; }
void rectangular_parallelepiped::volume() { cout << "Your volume is: " << length*width*depth << endl; };
rhombohedron::rhombohedron(double length1, double height1) : parallelepiped(length1, length1, length1) { height = height1; };
void rhombohedron::square() { cout << "Your square is: " << 6 * (length*height) << endl; };
cube::cube(double height1) : rhombohedron(height1, height1), rectangular_parallelepiped(height1, height1, height1), parallelepiped(height1, height1, height1) {};
void cube::square() { rhombohedron::square(); }
void cube::volume() { rectangular_parallelepiped::volume(); };