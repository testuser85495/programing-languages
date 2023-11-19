#include<stdio.h>
int main()
{
	int base,height,area;
	printf("Enter the base of triangle:");
	scanf("%d",&base);
	printf("Enter the height of triangle:");
	scanf("%d",&height);
	
	area=(base*height)/2;
	
	printf("the area of triangle is:%d",area);
	return 0;
}
