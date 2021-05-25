#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int n, i;
	scanf_s("%d", &n);
	for (i = 1; i <= 10; i++)
	{
			printf("\n %d x %d = %d", n, i, n * i);
	}
}