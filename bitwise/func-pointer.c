#include <stdio.h>

int multiply(short a, short b)
{
	return (int)a * (int)b;
}

int main()
{
	int (*pf)(short, short) = multiply;

	printf("Multiplied through function pointer: %d\n", pf(10, 9));

	return 0;
}

