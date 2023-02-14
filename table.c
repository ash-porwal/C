// Get the multiplication of any number 
#include <stdio.h>
int main(){
    int num;
    int n = 1;
    printf("Enter the number to get its multiplication\n");
    scanf("%d", &num);
    do{
        printf("%d \n", num * n);
        n++;
    }
    while (n < 11);
    return 0;
}