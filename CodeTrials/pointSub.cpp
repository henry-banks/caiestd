#include "caiestd.h"
//written by Skipperzip
//probably broken
Point2D pointSub(const Point2D & lhs, const Point2D & rhs)
{

	int sub1 = lhs.x - rhs.x;
	int sub2 = lhs.y - rhs.y;
	
	Point2D subtract;
	subtract.x = sub1;
	subtract.y = sub2;

	return Point2D(subtract);
}