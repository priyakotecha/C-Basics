#include<stdio.h>

int main()
{
	int num1;
	int reverse=0;
	printf("Enter the number:");
	scanf("%d",&num1);
	while(num1!=0)
	{
		reverse=(reverse*10)+(num1%10);
		num1=num1/10;
	}
	printf("reverse=%d",reverse);
	return 0;
}