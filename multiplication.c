#include <stdio.h>
int main()
{
	int i, start, end;
	printf("start");
	scanf("%d",&start);
	printf("end");
	scanf("%d",&end);
	for(int j=start; j<=end; j++)
	{
		printf("the multiplication table of: %d\n",j);
		for(i=1; i<=10;i++)
		{
			printf("%d x %d=%d",j, i, j*i);
			printf("\n");
		}
	}
	return 0;
}