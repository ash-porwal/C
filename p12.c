/*  Write a program to print first n natural numbers using for loop.
    input 4 
    output - 1 2 3 4 */

#include <stdio.h>

int main()
{
    int i = 0;
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);

    do
    {
        ++i;
        printf("The number is %d \n", i);
    } while (i < n);
    return 0;
}