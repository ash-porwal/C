// To find the greatest number among any four number 
#include <stdio.h>

int main()
{
    float a, b, c, d;
    
    printf("Enter 1st number : ");
    scanf("%f", &a);

    printf("Enter is 2nd number : ");
    scanf("%f", &b);

    printf("Enter 3rd number : ");
    scanf("%f", &c);

    printf("Enter 4th number : ");
    scanf("%f", &d);

    if ( a > b && a > c && a > d){
        printf("%f is the greatest number", a);
    }

    else if ( b > a && b > c && b > d)
    {
        printf("%f is the greatest number", b);
    }

    else if ( c > b && c > a && c > d)
    {
        printf("%f is the greatest number", c);
    }

    else if ( d > b && d > c && d > a)
    {
        printf("%f is the greatest number", d);
    }

    return 0;
}
