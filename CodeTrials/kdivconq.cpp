#include "caiestd.h"
#include <cstdio>

//int someNums[12];

int evalMax(int a, int b)
{
	if (a < b) return b;
	else       return a;
}

int divideAndConquer(int a_val[], unsigned int size) // if size is a square of 2
{
	int val[64];
	for (int i = 0; i < size; ++i)
		val[i] = a_val[i];

	while (size != 1)
	{
		for (int i = 0; i < size; i = i + 2)
		{
			if (i + 1 == size)
				val[i / 2] = val[i];

			else
				val[i / 2] = evalMax(val[i], val[i + 1]);

			printf("%d ", val[i / 2]);

		}
		printf("\n");
		size = size / 2;
	}

	return val[0];
}



//int divideAndConquer(int someNums[12], size_t numSize)
//{
//	int A = 0, B = 0, C = 0, D = 0, E = 0, F = 0, G = 0, H = 0, I = 0, J = 0, K = 0, L = 0;
//	//int someNums[12] = {A,B,C,D,E,F,G,H,I,J,K,L};
//	printf("Please input 12 numbers: ");
//	scanf_s("%d %d %d %d %d %d %d %d %d %d %d %d", &A, &B, &C, &D, &E, &F, &G, &H, &I, &J, &K, &L);
//
//	int someNums[12] = { A,B,C,D,E,F,G,H,I,J,K,L };
//	
//	while ()
//	{
//		int someNums[];
//		int smallest, largest;
//
//		for (int i = 0; i < 10; ++i)
//		{
//			scanf_s(" %d", &someNums[i]);
//
//			if (i == 0)
//				smallest = largest = &someNums[i];
//
//			if (someNums[i] > largest)
//				largest = someNums[i];
//
//
//		}
//		printf("Largest: %d and the smallest: %d\n");
//
//
//	}
//
//
//	return 0;
//}




/*
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
}*/

/*
int scanNum()
{
	scanf_s("%d %d", &in1, &in2);

	return divideAndConquer(in1, in2);
}
*/