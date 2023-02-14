// increment of pointers...this is pointer arithematic we can also decrease the value of pointer by tying ptr--
#include <stdio.h>

int main()
{
    int x = 5;
    int *ptr = &x;
    printf("in pointer ptr address of x is saved which is: %u\n", ptr);
    printf("address of x %u\n", &x);
    printf("value of ptr %u\n", *ptr);
    printf("address of ptr %u\n", &ptr);

    ptr++; // if we are writing ptr++ means we are increasing of pointer ..after writing ptr++ one time it the address or the value of ptr will increase by 4 but if we are writing ptr++ twice like this ...then it will increase 8..for writing ptr++ for 3 times then the value will increase by 12 
     // similarly for decreasing it we can write ptr--;
    printf("address of ptr %u\n", ptr); // this is how we get address values
    return 0;
}
// for integers and float it generally adds 4 bytes  but if it was a character i.e. char then it would add 1