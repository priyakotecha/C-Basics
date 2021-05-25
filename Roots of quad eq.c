#include <stdio.h>

#include <math.h>


int main() 
{
    
	double a, b, c, discriminant, r1, r2, realpart, imagpart;
    
	printf("Enter the coefficients a, b, c");
    
	scanf("%lf %lf %lf", &a, &b, &c);
    
	discriminant = (b*b-4*a*c);
    
	if (discriminant>0)
    
	{
        
		r1=(-b+sqrt(discriminant))/(2*a);
        
		r2=(-b-sqrt(discriminant))/(2*a);
        
		printf("root1=%.2lf and root2=%.2lf", r1, r2);
    
	}
    
	else if (discriminant==0)
    
	{
        
		r1=r1=(-b/(2*a));
        
		printf("root1=root2=%.2lf", r1);
    
	}
    
	else
    
	{
        
		realpart=-b/(2*a);
        
		imagpart=sqrt(-discriminant)/(2*a);
        
		printf("root1=%.2lf+%.2lfi and root2=%.2lf-%.2lfi", realpart, imagpart, realpart, imagpart);
    
	}
    
    
	return 0;

}