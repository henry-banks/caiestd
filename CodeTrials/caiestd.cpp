#include "caiestd.h"
#include <iostream>

Point2D pointAdd(const Point2D & lhs, const Point2D & rhs)
{
    return Point2D();
}

Point2D pointSub(const Point2D & lhs, const Point2D & rhs)
{
    return Point2D();
}

int divideAndConquer(int nums[], size_t numSize)
{
    return 0;
}

int displacementOverlap(int aMin, int aMax, int bMin, int bMax)
{
    return 0;
}

float degToRad(float deg)
{
    return 0.0f;
}

float radToDeg(float rad)
{
    return 0.0f;
}

int pow(int base, int power)
{
    return 0;
}

float distance(Point2D first, Point2D second)
{
    return 0.0f;
}

int sum(int nums[], size_t numSize)
{
    return 0;
}

void fiboMyArray(int dest[], size_t destSize)
{
	int c, first = 0, second = 1, next;
	
	for (c = 0; c < destSize; c++)
	{
		if (c <= 1)
			next = c;
		else
		{
			next = first + second;
			first = second;
			second = next;
		}

		dest[c] = next;
		printf("%d\n", dest[c]);
	}

}

void concatIntArray(int srcA[], size_t srcSizeA, int srcB[], size_t srcSizeB, int dest[], size_t destSizeB)
{
}

Hotdog & applyHotdog(Hotdog & targetDog, int relishApps, int mustardApps, int creamCheeseaApps)
{
    return Hotdog();
}

void printHotdog(const Hotdog & targetDog)
{
}

void cookHotdog(Hotdog & targetDog)
{
}
