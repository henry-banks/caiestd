#include "caiestd.h"
#include <iostream>
#include <math.h>

Point2D pointAdd(const Point2D & lhs, const Point2D & rhs)
{
    return Point2D();
}

Point2D pointSub(const Point2D & lhs, const Point2D & rhs)
{
    return Point2D();
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
	float d = 0;
	//test
	d = sqrt(((second.x - first.x)* (second.x - first.x)) + ((second.y - first.y)*(second.y - first.y)));

	return d;
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
	int j = 0;

	for (int i = 0; i < (srcSizeA); i++)
	{
		dest[i] = srcA[i];
	}
	for (int i = srcSizeA; i < (srcSizeA + srcSizeB); i++)
	{
		dest[i] = srcB[j];
		j++;
	}
}

// Zomawia Sailo
Hotdog & applyHotdog(Hotdog & targetDog, int relishApps, int mustardApps, int creamCheeseaApps)
{
	if (targetDog.isPrepared != true) //check if already prepared
	{
		targetDog.creamCheese += creamCheeseaApps;
		targetDog.relish += relishApps;
		targetDog.mustard += mustardApps;
		printf("\nAdding %d spread(s) of cream cheese, %d squirt(s) of relish, and %d squirt(s) of mustard.\n",
			creamCheeseaApps, relishApps, creamCheeseaApps);
	}
	
	return targetDog;
}

// Zomawia sailo
void printHotdog(const Hotdog & targetDog)
{
	printf("Hotdog is ");
	if (targetDog.isPrepared) printf("prepared.\n");
	else printf("not prepared.\n");

	printf("Amount of relish: %d squirt(s)\n", targetDog.relish);
	printf("Amount of cream cheese (gross): %d spread(s)\n", targetDog.creamCheese);
	printf("Amount of mustard: %d squirt(s)\n", targetDog.mustard);
	
}

void cookHotdog(Hotdog & targetDog)
{
	targetDog.isPrepared = true;
}
