// strcat is use to concatinate(Link two strings) two strings and also you wont see any space between those two strings
#include<stdio.h>
#include <string.h>

int main(){
    char st1[45] = "Hello";
    char *st2 = "Harry";
    strcat(st1, st2);
    // strcat(st2, st1);
    printf("Now the st1 is %s\n", st1);
    printf("and st2 is %s", st2);
    return 0;
}