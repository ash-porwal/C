// how to take input output through pointer

#include<stdio.h>

int main(){
    int marks[4];
    int *ptr; // we are taking just one int pointer..this int pointer will point initially at the first elemnt ..then by ptr++ it will ncrease
    // ptr = &marks[0]; // if we are poitning mark0 then we can increase it by doing ptr++ 
   
        printf("line 10 address of *ptr: %d \n", *ptr);
        printf("line 11 address of *ptr: %d \n", &ptr);
    ptr = marks;
        printf("line 16 address of marks in ptr: %d \n", &marks);

    for(int i =0; i<4; i++){
        printf("Enter the value of marks for student %d: \n", i+1);
        scanf("%d", ptr); 
        ptr ++;
    }

    for(int i =0; i<4; i++){
        printf("The value of marks for student %d is %d \n",i+1, marks[i]);  
    }
    return 0;
}