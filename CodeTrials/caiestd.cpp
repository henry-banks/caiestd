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
	float measurement;

	if (aMin < bMin)
	{
		int temp = aMin;
		aMin = bMin;
		bMin = temp;

		temp = aMax;
		aMax = bMax;
		bMax = temp;
	}

	if (aMax < bMin || (aMax > bMin && aMax < bMax))
	{
		return (aMax - bMin);
	}
	else //(aMax >= bMax)
	{
		return((bMax - bMin) + (bMin - aMin));
	}
}

float degToRad(float deg)
{
    return (deg/180.0)*3.14159265358979323846;
}

float radToDeg(float rad)
{
    return (rad*180.0)/3.14159265358979323846;
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
}

void concatIntArray(int srcA[], size_t srcSizeA, int srcB[], size_t srcSizeB, int dest[], size_t destSizeB)
{
}

Hotdog & applyHotdog(Hotdog & targetDog, int relishApps, int mustardApps, int creamCheeseaApps)
{
    return Hotdog();
}

// zomawia sailo
void printHotdog(const Hotdog & targetDog)
{
	printf("Hotdog is ");
	if (targetDog.isPrepared) printf("cooked.\n");
	else printf("not prepared.\n");

	printf("Amount of relish: %d squirt(s)\n", targetDog.relish);
	printf("Amount of cream cheese (gross): %d spread(s)\n", targetDog.creamCheese);
	printf("Amount of mustard: %d squirt(s)\n", targetDog.mustard);
	
}

void cookHotdog(Hotdog & targetDog)
{
}
