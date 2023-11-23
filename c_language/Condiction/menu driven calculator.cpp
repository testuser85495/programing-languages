//Create menu driven calculator using function


#include<stdio.h>

int main()
{
	 //Variables
	int choice;
	int num1,num2,result;
	
	
	printf("--------------MENU--------------\n");
	printf("1. Addition\n");    // \n is use for new line
	printf("2. Substraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n"); 
	
	//input for choice
	printf("Enter your choice: ");
	scanf("%d",&choice);         // %d is Format specifier
	
	//If condition was execute when user choice a proper value from menu 
	if(choice <= 4 && choice >=1)
	{
		//input for user 1st number
		printf("Enter first number: ");
   		scanf("%d", &num1);
   		
    	//input for user 2nd number
    	printf("Enter second number: ");
    	scanf("%d", &num2);
    
		/*switch case is apply on choice variable
		when user choice any one number from menu operation will perform*/
		switch(choice)
		{
			case 1:
				result = num1 + num2;     //Addition of two number the user has entered
				printf("Addition = %.d\n",result);
				break;
			case 2:
				result = num1 - num2;    //Substraction of two number the user has entered
				printf("Substraction = %.d\n",result);
				break;
			case 3:
				result = num1 * num2;    //Multiplication of two number the user has entered
				printf("Multiplication = %.d\n",result);
				break;
			case 4:
            	if (num2 != 0)    // Division cannot perform with 0
					{        
               		 result = num1 / num2;  //Division of two number the user has entered
               		 printf("Division = %.d\n", result);
           			 }
			 	else
				{
                printf("Error: Cannot divide by zero.\n");
           		 }
           		 break;
       		 
		}
	}
	// when user has not given valid choice the else will execute
	else
	{
		printf("Invalid choice !!!!\n");
	}
		
	return 0;
}
