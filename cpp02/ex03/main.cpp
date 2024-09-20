#include <iostream>
#include <iomanip>
#include "Point.hpp"

#define TRIANGLES_CNT 5
#define A 0
#define B 1
#define C 2

bool	bsp(Point const a, Point const b, Point const c, Point const point);

void	check_points(Point triangles[TRIANGLES_CNT][3], Point points[TRIANGLES_CNT]) {
	for (int i = 0; i < TRIANGLES_CNT; i++)
	{
		bool result = bsp(triangles[i][A], triangles[i][B], triangles[i][C], points[i]);
		std::cout << std::fixed << std::setprecision(1) << "A:(" << triangles[i][A].getX() << ", " << triangles[i][A].getY() << ")\t";
		std::cout << std::fixed << std::setprecision(1) << "B:(" << triangles[i][B].getX() << ", " << triangles[i][B].getY() << ")\t";
		std::cout << std::fixed << std::setprecision(1) << "C:(" << triangles[i][C].getX() << ", " << triangles[i][C].getY() << ")\t";
		std::cout << std::fixed << std::setprecision(1) << "P:(" << triangles[i][C].getX() << ", " << triangles[i][C].getY() << ")\t";
		if (result == true)
			std::cout << "\033[1;32m";
		else
			std::cout << "\033[1;31m";
		std::cout << std::boolalpha << result << std::noboolalpha << std::endl;
		std::cout << "\033[0m";
	}
	std::cout << std::endl;
}

int main( void ) {
	// point inside of triangle
	Point triangles_with_point_inside[TRIANGLES_CNT][3] = {{Point(0.0, 0.0), Point(5.0, 0.0), Point(2.0, 5.0)},\
														{Point(1.0, 1.0), Point(4.0, 1.0), Point(2.5, 4.0)},\
														{Point(-2.0, -2.0), Point(2.0, -2.0), Point(0.0, 2.0)},\
														{Point(1.0, 1.0), Point(6.0, 1.0), Point(4.0, 5.0)},\
														{Point(-3.0, -3.0), Point(1.0, -3.0), Point(-1.0, 1.0)}};
	Point points_in_triangle[TRIANGLES_CNT] = {Point(2.0, 2.0), Point(2.0, 2.0), Point(0.0, 0.0), Point(4.0, 3.0), Point(-1.0, -1.0)};

	// point outside of triangle
	Point triangles_with_point_outside[TRIANGLES_CNT][3] ={{Point(0.0, 0.0), Point(5.0, 0.0), Point(2.0, 5.0)},\
														{Point(1.0, 1.0), Point(4.0, 1.0), Point(2.5, 4.0)},\
														{Point(-2.0, -2.0), Point(2.0, -2.0), Point(0.0, 2.0)},\
														{Point(1.0, 1.0), Point(6.0, 1.0), Point(4.0, 5.0)},\
														{Point(-3.0, -3.0), Point(1.0, -3.0), Point(-1.0, 1.0)}};
	Point points_out_triangle[TRIANGLES_CNT] = {Point(6.0, 6.0), Point(5.0, 5.0), Point(3.0, 3.0), Point(7.0, 7.0), Point(2.0, 2.0)};

	// point on edge of triangle
	Point triangles_with_point_on_edge[TRIANGLES_CNT][3] ={{Point(0.0, 0.0), Point(5.0, 0.0), Point(2.0, 5.0)},\
														{Point(1.0, 1.0), Point(4.0, 1.0), Point(2.5, 4.0)},\
														{Point(-2.0, -2.0), Point(2.0, -2.0), Point(0.0, 2.0)},\
														{Point(1.0, 1.0), Point(6.0, 1.0), Point(4.0, 5.0)},\
														{Point(-3.0, -3.0), Point(1.0, -3.0), Point(-1.0, 1.0)}};
	Point points_on_edge_triangle[TRIANGLES_CNT] = {Point(2.0, 0.0), Point(2.5, 1.0), Point(0.0, -2.0), Point(4.0, 1.0), Point(-1.0, -3.0)};

	// point on one of vertexes of triangle
	Point triangles_with_point_on_vertex[TRIANGLES_CNT][3] ={{Point(1.0, 2.0), Point(4.0, 5.0), Point(7.0, 2.0)},\
														{Point(0.0, 0.0), Point(5.0, 0.0), Point(2.5, 4.33)},\
														{Point(-2.0, 3.0), Point(1.0, 6.0), Point(4.0, 3.0)},\
														{Point(3.0, 3.0), Point(6.0, 7.0), Point(8.0, 4.0)},\
														{Point(2.0, 1.0), Point(6.0, 5.0), Point(2.0, 5.0)}};
	Point points_on_vertex_triangle[TRIANGLES_CNT] = {Point(1.0, 2.0), Point(5.0, 0.0), Point(4.0, 3.0), Point(6.0, 7.0), Point(2.0, 5.0)};

	std::cout << "\033[1;35m" << "\n\t\t[==== IS POINT IN TRIANGLE ====]" << "\033[0m\n" << std::endl;

	std::cout << "\033[1;32m" << "Point in a triangle" << "\033[0m" << std::endl;
	check_points(triangles_with_point_inside, points_in_triangle);

	std::cout << "\033[1;32m" << "Point outside a triangle" << "\033[0m" << std::endl;
	check_points(triangles_with_point_outside, points_out_triangle);

	std::cout << "\033[1;32m" << "The point on the edges of the triangle" << "\033[0m" << std::endl;
	check_points(triangles_with_point_on_edge, points_on_edge_triangle);

	std::cout << "\033[1;32m" << "The point on the edges of the triangle" << "\033[0m" << std::endl;
	check_points(triangles_with_point_on_vertex, points_on_vertex_triangle);
	return 0;
}
