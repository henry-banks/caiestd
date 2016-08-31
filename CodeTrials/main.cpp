//              
// Author       Terry Nguyen <terryn@aie.edu>
// Copyright    (c) 2016 Academy of Interactive Entertainment
//

#include "caiestd.h"
#include "caietest.h"

#include <iostream>

int main()
{
    ASSERT_EQ(true, true, "TRUE TEST", "Expected true.");
    ASSERT_FLOAT_EQ(0.1f, 0.1f, "FLOAT EQ TEST", "Expected true.");

    // Point2D
    Point2D pointA = { 0, 1 };
    Point2D pointB = { 2, 3 };

    Point2D pointAddResult = pointAdd(pointA, pointB);
    ASSERT_FLOAT_EQ(2.0f, pointAddResult.x, "POINT ADD (x)", "x value did not match");
    ASSERT_FLOAT_EQ(4.0f, pointAddResult.y, "POINT ADD (y)", "y value did not match");

    Point2D pointSubResult = pointAdd(pointA, pointB);
    ASSERT_FLOAT_EQ(-2.0f, pointSubResult.x, "POINT SUB (x)", "x value did not match");
    ASSERT_FLOAT_EQ(-2.0f, pointSubResult.y, "POINT SUB (y)", "y value did not match");

    float pointDistResult = distance(pointA, pointB);
    ASSERT_FLOAT_EQ(2.82843, pointDistResult, "DISTANCE", "Mismatch.");

    // Misc.
    

    // Hotdog

    system("pause");
}