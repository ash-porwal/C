// making a code to find grades of students by cases
#include <stdio.h>

int main()
{
    int grade;
    printf("Enter your marks here\n");
    scanf("%d", &grade);

    switch (grade)
    {
    case 1:
        printf("Your grade is A\n");
        break;
    case 2:
        printf("Your grade is B\n");
        break;
    case 3:
        printf("Your grade is C\n");
        break;
    case 4:
        printf("You are rejected\n");
        break;
        return 0;
    }
}