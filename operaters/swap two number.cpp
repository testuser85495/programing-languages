#include<stdio.h>

int main()
{
	int a=12,b=23,c;

	c=a;
	a=b;
	b=c;

	printf("\nAfter swapping, a = %d\n", a);
  	printf("After swapping, b = %d", b);
	return 0;
}
