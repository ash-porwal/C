//check

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number \n");
    scanf("%d", &num);

    if (num > 5)
    {
        printf("Number is greater than 5");
    }

    else if (num == 5)
    {
        printf("Number is equal to 5");
    
    }
    else
    {
        printf("Number is less than 5" );
    }
    return 0;
}
