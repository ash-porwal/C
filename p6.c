// making a code to find grades of students by else if
#include <stdio.h>

int main()
{
    int grade;
    printf("Enter your marks here\n");
    scanf("%d", &grade);

    if (grade > 90 && grade <= 100)
    {
        printf("Your grade is A!\n");
    }
    else if (grade > 80 && grade <= 90)
    {
        printf("Your grade is B\n");
    }
    else if (grade > 70 && grade <= 80)
    {
        printf("Your grade is C\n");
    }
    else if (grade > 0 && grade <= 70)
    {
        printf("YOUR GRADE IS D!! YOU NEED MORE PRACTISE!");
    }

    return 0;
}
