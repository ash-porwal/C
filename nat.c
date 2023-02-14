#include <stdio.h>

int main()
{
    int i = 0;
    int n = 20;
    // printf("Enter the value of n\n");
    // scanf("%d", &n);

    do
    {
        if (i > 9 && i < n)
        {
            printf("The number is %d \n", i);
        }
        i++;
    } while (i < n);
    return 0;
}