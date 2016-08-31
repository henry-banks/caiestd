//              
// Author       Terry Nguyen <terryn@aie.edu>
// Copyright    (c) 2016 Academy of Interactive Entertainment
//

#include "caiestd.h"
#include "caietest.h"

#include <iostream>

int main()
{
        ASSERT_TRUE(true, "TRUE", "True was not true");
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
        int divideArgs[] = { 34,543, 23, 12, 54, 34, -40, 3 };
        int divideResult = divideAndConquer(divideArgs, 8);
        ASSERT_EQ(543, divideResult, "DIVIDE AND CONQ", "");

        int displacement = displacementOverlap(0.0f, 5.0f, 3.0f, 7.0f);
        ASSERT_EQ(2, displacement, "DISPLACEMENT", "");

        // Unit Conversion
        float radResult = degToRad(180.f); // set your calculators... to RAD.
        ASSERT_FLOAT_EQ(3.14159, radResult, "Degrees to Radians", "");
        
        float degResult = radToDeg(1.f);
        ASSERT_FLOAT_EQ(57.2958, degResult, "Radians to Degrees", "");

        float powResult = pow(2, 4);
        ASSERT_EQ(16, powResult, "Exponentiation", "");

        int sumArgs[] = { 0, 5, 6, 7, 33, 44, 95 };
        int sumResult = sum(sumArgs, 7);
        ASSERT_EQ(190, sumResult, "Sum the Array", "");

        const int fibbLen = 10;
        int fibboed[fibbLen];
        fiboMyArray(fibboed, fibbLen);

        ASSERT_EQ(fibboed[0], 0, "Fibonacci Array (1 of 10)", "");
        ASSERT_EQ(fibboed[1], 1, "Fibonacci Array (2 of 10)", "");
        ASSERT_EQ(fibboed[2], 1, "Fibonacci Array (3 of 10)", "");
        ASSERT_EQ(fibboed[3], 2, "Fibonacci Array (4 of 10)", "");
        ASSERT_EQ(fibboed[4], 3, "Fibonacci Array (5 of 10)", "");
        
        ASSERT_EQ(fibboed[5], 5, "Fibonacci Array (6 of 10)", "");
        ASSERT_EQ(fibboed[6], 8, "Fibonacci Array (7 of 10)", "");
        ASSERT_EQ(fibboed[7], 13, "Fibonacci Array (8 of 10)", "");
        ASSERT_EQ(fibboed[8], 21, "Fibonacci Array (9 of 10)", "");
        ASSERT_EQ(fibboed[9], 34, "Fibonacci Array (10 of 10)", "");

        int concatA[] = { 10, 15, 4 };
        int concatB[] = { 6, 9, 23, 66 };
        int concatStore[7];

        concatIntArray(concatA, 3, concatB, 4, concatStore, 7);

        ASSERT_EQ(concatStore[0], 10, "Concatenate Integer Arrays ()", "");
        ASSERT_EQ(concatStore[1], 15, "Concatenate Integer Arrays", "");
        ASSERT_EQ(concatStore[2], 4, "Concatenate Integer Arrays", "");
        ASSERT_EQ(concatStore[3], 6, "Concatenate Integer Arrays", "");
        ASSERT_EQ(concatStore[4], 9, "Concatenate Integer Arrays", "");

        ASSERT_EQ(concatStore[5], 23, "Concatenate Integer Arrays", "");
        ASSERT_EQ(concatStore[6], 66, "Concatenate Integer Arrays", "");

        // Hotdog
        Hotdog dinoDog = {0};

        applyHotdog(dinoDog, 2, 3, 4);
        ASSERT_EQ(false, dinoDog.isPrepared, "UNCOOOKED HOTDOG :: Preparedness", "");
        ASSERT_EQ(2, dinoDog.relish, "UNCOOOKED HOTDOG :: Relish", "");
        ASSERT_EQ(3, dinoDog.mustard, "UNCOOKED HOTDOG :: Mustard", "");
        ASSERT_EQ(4, dinoDog.creamCheese, "UNCOOKED HOTDOG :: Cream Cheese", "");

        cookHotdog(dinoDog);
        ASSERT_EQ(true, dinoDog.isPrepared, "COOOKED HOTDOG :: Preparedness", "");

        applyHotdog(dinoDog, 3, 5, 6);
        ASSERT_EQ(true, dinoDog.isPrepared, "UNCOOOKED HOTDOG :: Preparedness", "");
        ASSERT_EQ(2, dinoDog.relish, "UNCOOOKED HOTDOG :: Relish", "");
        ASSERT_EQ(3, dinoDog.mustard, "UNCOOKED HOTDOG :: Mustard", "");
        ASSERT_EQ(4, dinoDog.creamCheese, "UNCOOKED HOTDOG :: Cream Cheese", "");

        system("pause");
}