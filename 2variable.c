#include <stdio.h>

int main()
{
    int a = 500;
    float b = 50.5; // decimal wale double data type(data type like int, float, double) return karte hai
    char c = 'x'; // we write one character in a single quote ..it wont be like this c = 'xyz' this will gives error
    int d = 230;

    printf("the value  of a %d \n", a); // %d for integers
    printf("the value  of b %f \n", b); // %f for real values
    printf("the value  of c %c \n", c); // %c for characters
    printf("sum of a and d is %d \n", a + d);
    return 0;
}