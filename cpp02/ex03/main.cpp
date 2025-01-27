#include "Point.hpp"


int main()
{
	// point inside triangle
	std::cout << "Point inside triangle: " << bsp(Point(0, 0), Point(4, 0), Point(0, 4), Point(1, 1)) << std::endl;

	// point outside triangle
	std::cout << "Point outside triangle: " << bsp(Point(0, 0), Point(4, 0), Point(0, 4), Point(5, 5)) << std::endl;

	// point on triangle
	std::cout << "Point on triangle: " << bsp(Point(0, 0), Point(4, 0), Point(0, 4), Point(0, 0)) << std::endl;

}