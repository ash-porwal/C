// strcmp is use to compare betwen two strings...and strcmp returns integer
#include<stdio.h>
#include<string.h>

int main(){
    char st1[45] = "hello";
    char *st2 = "hello";
    int val = strcmp(st1, st2);
    printf("Now the val is %d", val);// here the value it gives it will be difference betweem ASCII values of both char
    return 0;
}