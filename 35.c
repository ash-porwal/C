// declaring a string using pointer
#include<stdio.h>

int main(){ 
    char *ptr = "Hello Bhai";
    // char ptr[] = "Hello Bhai"; // we can make array by *ptr or either this way ptr[] 
    printf("Value of ptr before assigning new value %s\n", ptr);
    ptr = "Bye bhai";
    printf("Value of ptr after assigning new value %s\n", ptr);
    return 0;
}
// in this we cannot change Hello bhai to bye bhai when we make an array
// but it can be changed when we we write *ptr ..so that is the differnce between them
// agar ham line number 6 jaha array bnaya waha par value "Hello Bhai" de di fir ptr ki value hamne line no. 8 mein "Bye bhai" de di toh woh array new value nahi lega jo ki hai "Bye bhai"
// but in case of pointer i.e. line number 5 *ptr ko value assign ki "Hello Bhai" fir ptr ko value de di "Bye Bhai" to wo ab change kar dega ptr ki value
// so that is the difference between pointer and array