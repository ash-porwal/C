/* Write a program with three functions,
  Good morning function which prints "Good Morning"
   Good afternoon function which prints "Good Afternoon"
     Good night function which prints "Good night" */
#include <stdio.h> // this is library function..predefined function
void gm();// user defined function and we have to define it
void ga();// user defined function and we have to define it
void gn();// user defined function and we have to define it

int main()
{
    gm();
    ga();
    gn();

    return 0;
}
void gm()
{
    printf("Hello!, Good Morning there!\n");
}

void ga()
{
    printf("Hello!, Good Afternoon there!\n");
}

void gn()
{
    printf("Hello!, Good night there!\n");
}