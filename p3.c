#include <stdio.h>
// if you are typing single = it means assignment operaator, if you wanna write some variable equals to that thing then you have to add two ==
// and in C using assignment operator unknown value above 0  is consider to be true
int main()
{
    int age;
        printf("Enter your age \n");
    scanf("%d", &age);

    if (age >= 65) 
    {

        printf("You are older citizen, so you will get pension");
    }

    else
    {
        printf("You are not older citizen, so you won't get pension");
    }

    return 0;
}
