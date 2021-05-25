
#include<stdio.h>
int main()
{
	int arr[100];
	int n, i, sum = 0, max, min;
	float avg = 0;
	
	printf("Enter the size of an array: ");
	scanf("%d", &n);
	printf("\nEnter elements of the array:\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i<n; i++)
	{
		sum = sum + arr[i];
		avg = sum / n;
		
	}
	printf("\nSum of the elements of the array is: %d\n", sum);
	printf("Average of elemets of the array is: %.1f\n", avg);
	max = arr[0];
	min = arr[0];
	printf("MAx and min of the elements of array is: ");
	for (i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}

	printf("%d %d", max, min);
	return 0;
}