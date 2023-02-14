// Use of Strcpy - this function is use to copy the content of second string into first string passed to it
#include<stdio.h>
#include <string.h>

int main(){
    char *st = "Dog watson";
    printf("this is the letter in string 1: %s\n",st);
    char st2[40];
    strcpy(st2, st);
    printf("But now the string 2 contains is : %s\n", st2);
    printf("now let us see what is inside string 1: %s\n",st);
    return 0;
}
// Conclusion now both string 1 and array we made contains 45 letters contains the same letter 