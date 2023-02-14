// calculation of si
#include <stdio.h>

int main()
{
    int p, r , t;


    printf("Enter your principal amount : \n");
    scanf("%d", &p);

    printf("Enter Rate percentage  : \n");
    scanf("%d", &r);

    printf("Enter time period  : \n");
    scanf("%d", &t);

    float si = (p * r * t) / 100;
    printf("Your SI value is : %f\n", si);

    return 0;
}
