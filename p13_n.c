// Write a program to print the multiplication table of a given number n.
 #include <stdio.h>
 
 int main(){
     int a, b;
     printf("Enter the number to get multiplicaton table : ");
     scanf("%d", &a);
     for (b = 1; b <= 10; ++b){
         printf("%d * %d = %d\n", a, b, a * b);
     }
     return 0;
 }
 // in printf("") arguments will be print from right to left