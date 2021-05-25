#include <stdio.h>

int main()

{
	
	int arr[100], i, n, j, c=0;
	
	printf("Enter the size of an array: ");
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	
	{
	    
		for(j=1; j<=arr[i]; j++)
	    
		{
	        
			if(arr[i]%j==0)
	       
			{
	           
				 c++;
	       
			}
	    
		}
	    
		if(c>2)
	    
		{
	        
			printf("The prime numbers in the array are: %d",arr[i]);
	    
		}
	    
		else
	    
		{
	        
			printf("The non prime numbers are: %d", arr[i]);
	    
		}
	
	}
	
	return 0;

}