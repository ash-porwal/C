// convinent way to print strings

#include<stdio.h>

int main(){

    // char *ptr = "hello bhai";
    char ptr[] = "hello bhai";
    printf("%s", ptr); // here we are writing %s is a format specifier to print string
    return 0;
}