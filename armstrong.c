#include <stdio.h>
#include <math.h>
int main()
{
	int num = 153, orig,   rem, amt = 0;
	orig = num;
	while (num)
	{
		rem = num % 10;
		amt = pow(rem,3) + amt;
		num = num / 10;
	}
	if (amt == num)

		printf("%d %d", orig, amt);
	else
		printf("%d %d", orig, amt);
	return 0;
}