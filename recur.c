#include<stdio.h>
void a(int x);

void main(){
    int c = 5;
    a(c);  // a(5)  
}
int i = 0;
void a(int x ){
    i++;
    //  printf("The value of i is %d\n", i);
     printf("The value of x is %d\n", x);
     if(i > 100){
         
     } else {
        a(x); // here function is calling itself again and again
     }
     
}

