#include <stdio.h>
// this is arithmetic Instruction
#include <math.h> // we are including math.h to find power(square) and add %f at that commmand which is using pow
int main()
{
    float a = 10, b = 12;
 
 // these are arithmetic operators
    printf("a + b = %f \n", a + b); // here a and b are operands and those  + - * / are called arithmethic operator
    printf("a * b = %f \n", a * b); // operands can be int and float
    printf("a - b = %f \n", a - b);
    printf("a / b = %f \n", a / b);

    int z;
    z = b * a; // legal
    // b * a = z this is illegal because = symbol is an assignment operator which says make value of b * a equals to z
    printf("value of z is %d\n", z);
    
   // what is modular divison operator    
    printf("when 5 divided by 2 leaves then it leaves remainder %d\n", 5 % 2); // here % is modular divison operator it gives us remainder
    printf("when -5 divided by 2 leaves then it leaves remainder %d\n", -5 % 2);
    printf("when 5 divided by -2 leaves then it leaves remainder %d\n", 5 % -2); // here it gives us remiander in positive but the denominator was in negative ..so there is a rule that the remainder sign depends upon numerator sign
    
    printf("value of 25^2 is %d\n", pow(25, 2)); // we have to use math.h function to run power function
    
    // when int and float add it gives float as a  result
    printf("addition of 7 + 8 is %f\n", 7 + 8);
    printf("addition of 7 + 8.9 is %f\n", 7 + 8.9);

    return 0;
}
