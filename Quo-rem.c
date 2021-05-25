#include<stdio.h>
int main()
{
	float quo=0.0;
	int a, b, rem;
	printf("Enter two number: ");
	scanf("%d %d",&a,&b);
	quo=(float)a/b;
	rem=a%b;
	printf("Quotient and remainder is: %f %d", quo, rem);
	return 0;
}