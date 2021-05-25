//Print 10 natural numbers and their sum
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int i, n;
	int rem, sum = 0;
	for (i = 1; i <= 10; i++)
	{
		printf("\n The first 10 digits are: %d", i);
	}
	printf("\n");
	for (i = 1; i <= 10; i++)
	{
		rem = num % 10;
		sum = sum + rem;
		num = num / 10;
	}
	printf("The sum of the 10 digits is: %d", sum);
}