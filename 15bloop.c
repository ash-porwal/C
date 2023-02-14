// break in loop
#include <stdio.h>

int main()
{
    int a = 0;
    //  a++; // here loop will go in infinite

    do{
        printf("Value of a : %d\n", a);
        // we added a break ki agar a ki value 5 ke equal ho jaye to loop break ho jaye
        if (a == 5)
        {
            break;
        }
        a++;
    } while (a < 10);
    return 0;
}
