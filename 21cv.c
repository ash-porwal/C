// call by reference
#include<stdio.h> 
void wrong_swap(int a, int b); 
void swap(int *a, int *b);// this is pointer

int main(){
    int x=3, y=4;
    printf("The value of x and y before swap is %d and %d\n", x, y);
    // wrong_swap(x, y); // will not work due to call by value..this is just to show
    // printf("The value of x and y after swap is %d and %d\n", x, y);
    swap(&x, &y); // will work due to call by reference.. here we are sending address as we mentioned & before both variables..and this address is stored by * ..so we have to add * before variables
    printf("The value of x and y after swap is %d and %d\n", x, y);

    return 0;
}

void wrong_swap(int a, int b){
    int temp;
    temp = a;
    printf("temp = %d\n", temp);
    a = b;
    printf("a = %d\n", a);
    b = temp;
    printf("b = %d\n", b);
}

void swap(int *a, int *b){ // we are swapping values of a and b
   
    printf("a = %d b = %d\n", a, b); // yaha par address aaya a and b ka toh we are changing the value of a and b in the address
    int temp;
    temp = *a;

    printf("*a = , *b =  %d\n", *a, *b);
    printf("temp %d\n", temp);
    *a = *b;
    printf("a %d\n", a);// if we want to know the address of a then just type a without astrick
    printf("a %d\n", *a);// if writing it with astrick then it will value
    printf("b %d\n", *b);
    *b = temp;
    printf("b %d\n", b);
    printf("b %d\n", *b);
}
// /* in this wrong swap is not working cuz here we are doing CALL BY VALUE means we are sending copy of a and b */

//So the main point here is that when the call by value method is used it doesn’t change the actual values because copies of actual values are sent to the function.

/*In the case of call by pointer, the address of actual parameters is sent to the formal parameter, which means that if we change the values inside 
the function that will affect the actual values */