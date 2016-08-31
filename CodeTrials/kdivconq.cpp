#include "caiestd.h"
#include <cstdio>


int divideAndConquer(int in1, int in2)
{
	if (in1 > in2)
	{
		printf(" %d ", in1);
		return in1;
	}
	else if (in1 < in2)
	{
		printf(" %d ", in2);
		return in2;
	}
	else if (in1 == in2)
	{
		printf("you can't enter the same number!\n");

	}



	return 0;
}


int scanNum(int in1, int in2)
{
	scanf_s("%d %d", &in1, &in2);

	return divideAndConquer(in1, in2);
}