// array for 5 values using for loop.. it ot basically more short
#include<stdio.h>

int main(){
    int marks[5];

    for(int i=0; i<5; i++)
    {
        printf("Enter the value of marks for student %d: ", i+1); // we could write only i at the end but we wrote i+1 cuz if i has value 0 then on adding 1  it will print 1, 2, 3, 4, 5 ...if it was only i .. it would print 0,1,2,3,4
        scanf("%d", &marks[i]); // here we write marks[i] because to start with 0// &marks[0]
    }

    for(int i=0; i<5; i++) // the same loop is using to print the value of marks
    {
        printf("The value of marks for student %d is: %d \n", i+1, marks[i]); 
    }

    return 0;
}