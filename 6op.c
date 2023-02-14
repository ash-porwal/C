#include <stdio.h>
//Operator Precedence in C it wont apply BODMAS ..there are priority of taking symbols
int main()
{
    int x = 2;
    int y = 3;
    /* priority order 
1st * / %
2nd + - 
3rd = 
 but Operators of higher priority are evaluated first in the absence of parenthesis()
 like  if we write 3 * (x - 8 * y) like this then ans will be different.*/

    printf("value of 3*x - 8*y is %d \n", 3 * x - 8 * y);

    /* but when there is tie between operators like among * / % then we check the associativity
     then it will be like 
     
     x  *  y  /  z  =>  (x *  y) / z

     x  /  y  *  z  =>  (x / y) * z

           *, / follows left to right associativity. */

    printf("value of 8*y / 3*x is %d \n", 8 * y / 3 * x); // so why are we getting 16 as answer in this 
    // becasuse it is doing like associativity
    // 8*y/3*x
    // 8*3/3*2
    // 24/3*2 .. ab ye 24 ko divide karaega 3 se then it will multiply
    // 8*2
    // 16

    return 0;
}
