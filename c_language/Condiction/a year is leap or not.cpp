//take year input from user and find that the year is leap year or not ?

#include <stdio.h>

int main() {
    // Declare variable
    int year;

    // Get year input from the user
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check if the year is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
    	
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
