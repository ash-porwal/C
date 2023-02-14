// for loop is compact form of while loop
#include <stdio.h>

int main()
{
    for (int a = 0; a < 10; a++) // here inside for loop parenthesis we wrote (initialization; put condition; increment or decrement aka updation)
    {                                     // here you can directly create variable inside for
        printf("Value of a is %d \n", a); // and you can also define it by giving value
    }
    return 0;
}
/* here what is happening is that phle wo a ki value ko 0 lega as we assigned the value of a
then it will check the condition(test) which is a<10 which is true in case of 0 ...so it will directly print 0 as output
but as it is going for loop then a++ works and it increases the value
and if we want it should print 1 at starting then at line no. 8 ..printf("Value of a is %d \n", a+1); we have to write a+1 instead of a */

// if we want for loop work till infinite then put any random condition which is always true like for(i = 0; 4<8; i++)..here 4 is always less then 8 so it will work till infinite