// Write a program to print the multiplication table of a given number n.
// so i am letting number 2 so we ginna make a table of 2
// but here i am getting only table of 2

#include <stdio.h>

int main()
{
    int n;
    printf("table of 2\n");
    for (n = 1;  n < 11; n++){ // here n < 11 represents loop will work till it gets less than 11.
        printf("2 * %d = %d\n", n, 2*n); // isme phle wala n phle wale %d ko value de rha aur dusara wala 2*n dusare wale %d ko value de rha
        
    }
    return 0;
}
// for (n = 1;  n < 11; n++) in this middle term is conditional sentence 