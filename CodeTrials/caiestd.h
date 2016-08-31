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
    bool isPrepared;

    int relish;
    int mustard;
    int creamCheese;
};

Point2D  pointAdd(const Point2D &lhs, const Point2D &rhs);
Point2D  pointSub(const Point2D &lhs, const Point2D &rhs);

int divideAndConquer(int nums[], size_t numSize);
float displacementOverlap(float aMin, float aMax, float bMin, float bMax);

float degToRad(float deg);
float radToDeg(float rad);
int pow(int base, int power);

float distance(Point2D first, Point2D second);
int sum(int nums[], size_t numSize);

void fizzMyArray(int dest[], size_t destSize);
void concatIntArray(int srcA[], size_t srcSizeA,
                    int srcB[], size_t srcSizeB,
                    int dest[], size_t destSizeB);

// Can not apply to hotdogs that have already been prepared.
Hotdog& applyHotdog(Hotdog &targetDog,
                    int relishApps,
                    int mustardApps,
                    int creamCheeseaApps);
void printHotdog(const Hotdog &targetDog);
void cookHotdog(Hotdog &targetDog);