// recursion
// A function can call itself. Such a process is called ‘recursion’.
#include<stdio.h>
int factorial(int x);

int main(){
    int a ;
    scanf("%d", &a);

    printf("The value of factorial %d is %d", a, factorial(a));
   return 0; 
}

int factorial(int x){
    printf("Calling factorial(%d)\n", x); // here a = x for complier
    if (x==1 || x==0){ // value of factorial 1 and 0 is 1 ..so if we get 1 value it should return the program ..otherwise if will go and find value til minus infinite 
        return 1;
    }
    else{
        return x * factorial(x-1); // factorial of n = (n-1)!*n
         // here 5 * factorial (4) = 5 * 4 * factorial(3) 
         // here 5 * factorial (4) = 5 * 4 * factorial(3) = 5 *4 * 3 * factorial (2) 
         // here 5 * factorial (4) = 5 * 4 * factorial(3) = 5 *4 * 3 * factorial (2) = 5*4*3*2*factorial(1)
         // here 5 * factorial (4) = 5 * 4 * factorial(3) = 5 *4 * 3 * factorial (2) = 5*4*3*2*factorial(1) = 5*4*3*2*1
    }
}