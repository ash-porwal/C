// Sometimes we want our programs to execute a few sets of instructions over and over again. For eg. Printing 1 to 100, first 100 even numbers, etc.
// Hence loops make it easy for a programmer to tell the computer that a given set of instructions must be executed repeatedly.

#include <stdio.h>

int main()
{
    int a;
    printf("enter your num\n");
    scanf("%d", &a);

    while (a <= 50){ // this is while loop
    //printf("a = %d\n", a);
       printf("%d\n", a);
        a++; // here this ++ is increment operator..it means a = a + 1 and this a is variable we made
    }
    
    return 0;
}
/* in while loop jaise humne number dala input mein 5 toh wo check karega if 5 is greater or not..
 so according to defination which we defined in while ( defination) at line 12 .. it saw that 5 is less than 50 and it must stop when value is 50 or greater
 so it will execute the programm
 then again a++ will increase 5 by 1 so it becomes 6 and again it will check the loop till gets value 50 */

 // if we want to run this while loop for infinite then in condition of while we have to write true like this 
 /* int i=1;
    while(true){
        printf("Value of i" %d);
    } */
    
