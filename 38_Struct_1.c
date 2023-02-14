// best way to initialize the structure
#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[20];
};

int main(){
    struct employee e = {100, 34.23, "Harry"}; // we are writing int, float, char in the same way as we defined it
// and if we want our all elements initial value 0 then we simply write like this struct employee harry = {0}; here all ...int,float,char get 0 value
    printf("Code is: %d \n", e.code);
    printf("Salary is: %f \n", e.salary);
    printf("Name is: %s \n", e.name);
 

    return 0;
}