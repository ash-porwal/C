//We can use the typedef keyword to create an alias(nickname) name for data types in c.

#include<stdio.h>
#include<string.h>


typedef struct employee{ // by writing typedef here we get convinence that ..now we dont write need to write struck again and again like in line 21,22
    int code;
    float salary;
    char name[20];
} emp; // we are writing emp so we can use emp at line 22,23 

void show(emp emp1){
    printf("The Code of employee is: %d\n", emp1.code);
    printf("The Salary of employee is: %f\n", emp1.salary);
    printf("The Name of employee is: %s\n", emp1.name);
    
}

int main(){
    // Declaring e1 and ptr
    emp e1;
    emp *ptr;

    // pointing ptr to e1
    ptr = &e1; 

    // Set the member values for e1
    ptr->code = 101;
    ptr->salary = 11.01;
    strcpy(ptr->name, "Harry"); 

    show(e1);

    return 0;
}