#include "caiestd.h"
Point2D pointAdd(const Point2D & lhs, const Point2D & rhs)
{
	Point2D placeholder;
	placeholder.x = lhs.x + rhs.x;
	placeholder.y = lhs.y + rhs.y;
	return placeholder;
}