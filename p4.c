#include <stdio.h>
// logical operators && read as AND logical Operator, ! read as NOT logical Operator, || read as OR logocal operators
int main()
{
    int age;
    printf("Enter your age \n");
    scanf("%d", &age);
    if (age >= 18 && age <= 75) // here && shows AND
    {
        printf("You can Drive \n");
    }

    else
    {
        printf("you can not drive");
    }
    return 0;
}

// 1 ka matalb hai True 
// 0 ka matalb hai Flase