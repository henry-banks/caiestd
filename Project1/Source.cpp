#include <iostream>


void fiboMyArray()
{
	int c, first = 0, second = 1, next;
	const int destSize = 10;
	int dest[destSize];
	
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
		
	system("pause");
}

int main()
{
	fiboMyArray();
	return 0;
}