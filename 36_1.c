/* C provides a set of standard library functions for strings manipulation.
one of the functions is strlen() =>
strlen() - This function is used to count the number of characters in the string excluding the null ('\0') character.

int length=strlen(st);
These functions are declared under <string.h> in header file. */

#include<stdio.h> 
#include <string.h> // we added this library function which exclude null character

int main(){
    char *st = "Ashish";
    int a = strlen(st); // or either we can write strlen(st); directly and then change the code in printf directly
    printf("The length of string st is %d", a);
    return 0;
}
// strlen function doesnot count the null character