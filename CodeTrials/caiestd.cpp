#include "caiestd.h"
#include <iostream>
#include <math.h>

Point2D pointAdd(const Point2D & lhs, const Point2D & rhs)
{
	Point2D placeholder;
	placeholder.x = lhs.x + rhs.x;
	placeholder.y = lhs.y + rhs.y;
	return placeholder;
}

Point2D pointSub(const Point2D & lhs, const Point2D & rhs)
{
	int sub1 = lhs.x - rhs.x;
	int sub2 = lhs.y - rhs.y;

	Point2D subtract;
	subtract.x = sub1;
	subtract.y = sub2;

	return subtract;
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
	int total;
	total = pow(base, power);
	printf("%d \n, total");
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
	int sum = 0;

	for (int i = 0; i < numSize; i++)
	{
		sum = sum + nums[i];

	}



	return sum;
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
