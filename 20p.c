// pointers - A pointer is a data type (variable) that stores the address another variable.
// * this star is called dereference operator
#include<stdio.h>

int main(){
    int i = 34;
    int *j;
    j = &i; //*j is decelaration of a pointer ..j will now store the address of i ...and here & is address of operator
    // We can do this too int *j = &i;
    printf("The value of i is %d\n", i);  // this line will print the value of i
    printf("The value of i is %d\n", *j); // this line will print the value of i like we want to know value by j then we have to use * in it
    printf("The address of i is %d\n", &i); // this will print the address of i because we are using %u which helps us to print address and using & before that int to get address
    printf("The address of i is %d\n", j); // this will print the address of i because we are using %u which helps us to print address
    printf("The address of j is %u\n", &j); // this will give address of j
    printf("The value of j is %d\n", *j); // here it will give value of j
    
    // printf("\nThis is pointer to pointer\n");
    // int** z = &j;
    // printf("\nThe address of j is:%d \n" &j);
    // printf("The address of j is:%d \n" z);
    // printf("The value at address of j is:%d \n" *z);
    // printf("The address of z is:%d \n" &z);
    // printf("The value at address of z is:%d \n" **z);
    return 0;
}
/* if it is written like j is pointing to i ..it means j is a varaible which stores value of i
and pointer to a pointer means a pointer is saving other pointer in itself */

// if we want value inside that pointer then we have to type dereference operator like in line 11 AND 15
// IF WE WANT ADDRESS OF A PARTICULAR VARIABLE THEN WE HAVE TO USE &(ADDRESS OPERATOR)like in line 12 and 14

// similarly we can make pointer to pointers like this 
