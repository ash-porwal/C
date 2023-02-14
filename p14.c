// Write a program to sum the first ten natural numbers using a while loop
#include <stdio.h>

int main()
{
    int x, sum = 0, num;
    printf("Enter number\n");
    scanf("%d", num);

    for(x = 0; x <= num; x++)
    {
        sum += x; // means sum + x
    }
    printf("Sum of 1 to %d is %d\n",num, sum);
    return 0;
}
