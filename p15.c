// to find a factorial of a number
#include <stdio.h>

int main()
{
    int i = 0, n, factorial = 1;
    printf("Enter any number to find factorial\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf(" The  factorial value is %d is %d", n, factorial);
    return 0;
}
