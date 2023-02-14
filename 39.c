// pointer to structures
#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[20];
};

int main(){
    struct employee e1;
    struct employee *ptr; // here we are making a pointer which can point to struck employee ke type variable

    ptr = &e1;
    //(*ptr).code = 101; //or you can also write: ptr->code = 101;
    ptr->code = 101; // this is arrow operator..which can replace * and dot (.) like above (*ptr).
    ptr-> salary = 68000; 
    printf("%d\n", e1.code);
    printf("%f", e1.salary); 

    return 0;
}