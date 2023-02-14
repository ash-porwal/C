// Write a program to find whether a year entered by the user is a leap year or not. Take the year as input from the user

#include <stdio.h>

int main()
{
    int year;

    printf("Enter year : ");
    scanf("%d", &year);
    
    if (year % 4 == 0){
        printf("%d is a leap year.", year);
    }
    else {
         printf("%d is not leap year. ", year);
    }
    return 0;
}
