#include <stdio.h>
//calculating area of a rectangle
int main()
{
    int length, breadth;
    printf("Length =");
    scanf("%d", &length);
    printf("Breadth =");
    scanf("%d", &breadth);
    
    int area = length * breadth;
    printf("area of rectangle is %d", area);
    
    return 0;
}