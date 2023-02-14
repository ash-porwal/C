// we can also take input from user

#include<stdio.h>

int main(){
    char s[34];
    printf("Enter your name: ");
    scanf("%s", s);
    printf("Your name is %s", s);
    return 0;
}
// but here if i put my name like Ashish Porwal then it will only print Ashish cuz it will terminate after seeing space between my last and first name
// so to write name like this we have function gets() and puts()