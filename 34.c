//gets() and puts()
// gets() is a function that can be used to receive a multi-word(means if we have space seperated more than one word then we use gets()) string

#include<stdio.h>

int main(){
    char s[34];
    printf("Enter your name: ");
    gets(s); // if there is a spacebar in between name then we have to replace scanf() into gets(s)
    // puts(s); // puts(st);   =>Prints the string and places on the next line
    printf("Your name is %s", s);
    return 0;
}