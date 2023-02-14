#include <stdio.h>
// if case basic
int main()
{
    int a;

    printf("Enter a number to check if it is even or not \n");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("%d is even \n", a);
    }

    else
    {
        printf("%d is odd \n", a);
    }

    return 0;
}
