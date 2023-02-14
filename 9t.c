/* ternary operators = Conditional operators
A shorthand “if-else” can be written using conditional or ternary operators.

Condition ?  expression-if-true ;  expression-if-false

Here, '?' and ':' are Ternary operators.....use in one liner conditional statement */

#include <stdio.h>

int main()
{
    int a;
        printf("Enter a number\n");
    scanf("%d", &a);

    (a < 5) ? printf("%d is less is than 5", a) : printf("%d is greater than 5", a);

    return 0;
}
