#include <iostream>
using namespace std;
struct Vector
{
	int x,y,z;
	Vector()
	{}
	Vector(int x, int y, int z) : x(x), y(y), z(z)
	{}
};
void main()
{
	Vector v1(10, 10, 10), v2(20, 20, 25);
	cin.get();
	cin.get();
}
const Vector operator & (const Vector &v1, const Vector &v2)
{
	return Vector(v1.x & v2.x, v1.y & v2.y,  v1.z & v2.z);
}
