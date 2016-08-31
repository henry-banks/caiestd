#pragma once

//              
// Author       Terry Nguyen <terryn@aie.edu>
// Copyright    (c) 2016 Academy of Interactive Entertainment
//

#include <cstdio>
#include <cmath>

#ifndef FLT_TEST_EPSILON
    #define FLT_TEST_EPSILON FLT_EPSILON
#endif

#define ASSERT_TRUE(CONDITION, TESTNAME, MESSAGE) \
if(!CONDITION) { fprintf(stderr, "[FAIL] %s // %s", TESTNAME, MESSAGE); } \
else { fprintf(stderr, "[PASS] %s", TESTNAME); } \
fprintf(stderr, "\n");

#define ASSERT_EQ(EXPECTED, ACTUAL, TESTNAME, MESSAGE) \
if(ACTUAL != EXPECTED) { fprintf(stderr, "[FAIL] %s // %s", TESTNAME, MESSAGE); } \
else { fprintf(stderr, "[PASS] %s", TESTNAME); } \
fprintf(stderr, "\n");

#define ASSERT_FLOAT_EQ(EXPECTED, ACTUAL, TESTNAME, MESSAGE) \
if( !(fabs(EXPECTED - ACTUAL) <= FLT_TEST_EPSILON )) { fprintf(stderr, "[FAIL] %s // %s", TESTNAME, MESSAGE); } \
else { fprintf(stderr, "[PASS] %s", TESTNAME); } \
fprintf(stderr, "\n");