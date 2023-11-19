#include<stdio.h>
int main()
{
	int length,width,area;
	printf("Enter the lenght of Rectangle:");
	scanf("%d",&length);
	printf("Enter the width of Rectangle:");
	scanf("%d",&width);
	
	area = length*width;
	
	printf("Area of Rectangle is: %d",area);
	return 0;
}
