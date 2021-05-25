#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int n, fact = 1, i;
	printf("Enter a number: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		fact = (fact * i);
	}
	printf("\n Factorial of %d is %d \n", n, fact);
}