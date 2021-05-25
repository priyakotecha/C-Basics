#define _CRT_SECURE_NO_WARNINGS
#include <Stdio.h>
void main()
{
	int a, b, c;
	printf("Enter the sides of the triangle: ");
	scanf_s("%d %d %d", &a, &b, &c);
	if ((a + b > c) && (b + c > a) && (a + c > b))
		printf("\n The triangle is valid\n");
	else
		printf("\nTriangle is not valid");

}