#ifndef Library_h
#define Library_h
using namespace std;


class parallelepiped {
protected:
	double length;
	double width;
	double depth;
public:
	parallelepiped(double, double, double);
};
class rectangular_parallelepiped : public virtual parallelepiped {
public:
	rectangular_parallelepiped(double, double, double);
	void square();
	void volume();
};
class rhombohedron : public virtual parallelepiped {
protected:
	double height;
public:
	rhombohedron(double, double);
	void square();
};
class cube : public rhombohedron, public rectangular_parallelepiped {
public:
	cube(double);
	void square();
	void volume();
};
#endif

