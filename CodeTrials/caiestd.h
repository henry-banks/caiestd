#pragma once

//              
// Author       Terry Nguyen <terryn@aie.edu>
// Copyright    (c) 2016 Academy of Interactive Entertainment
//

struct Point2D
{
    float x, y;
};

struct Hotdog
{
    bool isPrepared;    // Has the hotdog been cooked?

    int relish;         // Number of relish squirts applied.
    int mustard;        // Number of mustard squirts applied.
    int creamCheese;    // Number of cream cheese spreads applied.
};

// Returns the sum of two points.
Point2D  pointAdd(const Point2D &lhs, const Point2D &rhs);

// Returns the difference between two points.
Point2D  pointSub(const Point2D &lhs, const Point2D &rhs);

// For every 2 values, print the larger of the two.
// Repeat this process until only one integer remains.
//
// Returns the last remaining integer.
int divideAndConquer(int nums[], size_t numSize);

// Returns the overlap amount between two 1-dimensional objects.
// More Information: http://goo.gl/YS0hc1
int displacementOverlap(int aMin, int aMax, int bMin, int bMax);

// Returns the value converted into radians.
float degToRad(float deg);

// Returns the value converted into degrees.
float radToDeg(float rad);

// Returns the base raised to the given power.
int pow(int base, int power);

// Returns the distance between two 2D points.
float distance(Point2D first, Point2D second);

// Returns the sum of all elements in the integer array.
int sum(int nums[], size_t numSize);

// Populates the array with FizzBuzz values.
void fizzMyArray(int dest[], size_t destSize);

// Copy the first and second arrays into the third array.
void concatIntArray(int srcA[], size_t srcSizeA,
                    int srcB[], size_t srcSizeB,
                    int dest[], size_t destSizeB);

// Applies a number of condiments to a hotdog.
// Does not make any changes to hotdogs that have already been prepared.
//
// Returns the given hotdog.
Hotdog& applyHotdog(Hotdog &targetDog,
                    int relishApps,
                    int mustardApps,
                    int creamCheeseaApps);

// Prints out information pertaining to the hotdog to the console window.
void printHotdog(const Hotdog &targetDog);

// Cooks the hotdog, thus making it prepared.
//
// Marks the hotdog as "prepared".
void cookHotdog(Hotdog &targetDog);