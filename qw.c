#include <stdio.h>
void italy();
void brazil();
void argentina();
int main()
{
    printf("I am in main\n");
    italy();
    return 0;
}
void italy()
{
    printf("I am in italy\n");
    brazil();
}
void brazil()
{
    printf("I am in brazil\n");
    argentina();
}
void argentina()
{
    printf("I am in argentina\n");
}