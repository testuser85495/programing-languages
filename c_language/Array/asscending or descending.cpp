////WAP to take two Array input from user and sort them in ascending or
//descending order as per user’s choice



#include<stdio.h>

int main()
{
	int choice,i,arr[5],temp,j;
	
	printf("=========Choice board=======\n");
	printf("1.Ascending\n");
	printf("2.Descending\n");
	
	printf("Enter your choice:\n");
	scanf("%d",&choice);
	
	if(choice ==1)
	{
		for(i=0;i<5;i++)
		{
			printf("Enter array Elements:",i);
			scanf("%d",&arr[i]);
		}
		for(i=0;i<5;i++)
		{
			for(j=i+1;j<5;j++)
			{
				if(arr[i] > arr[j])
				{
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
				
		for(i=0;i<5;i++)
		{
			printf("%d:",arr[i]);
		}
	}
	
	else if(choice ==2)
	{
		for(i=0;i<5;i++)
		{
			printf("Enter array Elements:",i);
			scanf("%d",&arr[i]);
		}
		for(i=0;i<5;i++)
		{
			for(j=i+1;j<5;j++)
			{
				if(arr[i] < arr[j])
				{
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
				
		for(i=0;i<5;i++)
		{
			printf("%d:",arr[i]);
		}
	}
	
	else
	{
		printf("invalid!!! choice");
	}
	
	return 0;
}
