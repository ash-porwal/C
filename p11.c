// Write a program to determine whether a character entered by the user is lowercase or not
// here you need to know ascii table to find lower case or upper case
// like 97 - 122 is a - z
#include <stdio.h>

int main(){
    char chr;
    printf("Enter the character\n");
    scanf("%c", &chr);
     if ( chr <= 122 && chr >= 97){
         printf("%c is lowercase", chr);
     }
    else {
        printf("%c is not lower case", chr);
    }
    return 0;
}
