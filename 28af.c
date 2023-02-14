// passing array in function
#include<stdio.h>

// void printArray(int *ptr, int n){ // this will take first address of array
//     for(int i=0; i<n; i++){
//         printf("The value of element %d is %d\n", i+1, *(ptr+i)); 
//     }
// }
// and this is another way to pass an array
void printArray(int ptr[], int n){ // in above we made *ptr ..we can also make ptr[] this is called integer array
    for(int i=0; i<n; i++){
        printf("The value of element %d is %d\n", i+1, ptr[i]); 
    } 
    ptr[2] = 5555; // so we are checking if ptr 2 will change original value of ptr 2 ..then yes This value will be changes in arr array of main as well cuz we are giving the address
}

int main(){
    int arr[] = {1,2,3543,34,3,645,23}; // size of this array is 7
    printArray(arr, 7); // this is how we pass arrray.. and this value 7 shows all the numbers ..here we are paasing 7 because we will know where to stop in for loop
    printf("after changing the value of ptr[2] %d", arr[2]);
    return 0;
}
// if here printArray(arr, 7); hum value 7 nahi rakhte to ..for example if we put 8 then the 8th value will be a random value...that is why we pass the size too  
    