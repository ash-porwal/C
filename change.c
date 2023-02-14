#include<stdio.h>
void change(int a);

int main(){
    int b = 55;
    printf("The value of b before change is %d\n", b);
    change(b); //change(55)
    printf("The value of b after change is %d\n", b);
    return 0;
}

void change(int b){
    printf("value of b = %d\n", b);
    b = 77;
}