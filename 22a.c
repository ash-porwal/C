// Arrays - An array is a collection of similar elements. means agar int hai to integer rahenge sare ke sare ... agar float hai to float rahenge sare
// we show array bt this []
#include<stdio.h>

int main(){
    // Naive way to create 4 ints.. like if we are making 4 ppl marks then we have to make seperate variables
    // int marks1, marks2, marks3, marks4;
    // marks1 = 34;
    // marks2 = 45;
    // marks3 = 67;
    // marks4 = 87;
    int marks[4];  // this is array in this we are showing 4 ppl marks .... we can say ONE VARIABLE CAPABLE OF STORING MULTIPLE VALUES
    marks[0] = 34; // we start from 0 here because in c language index starts from 0 ...commputer starts counting from 0 and goes up to n-1...here if we make array of 4 then starting from 0 then 1 then 2 then 3 ..it reaches to number 3 
    marks[1] = 45;
    marks[2] = 34;
    marks[3] = 67;
    printf("The value of marks[0]: %d\n", marks[0]);
    printf("The address of marks[0]: %d\n", &marks[0]);// this is how we check the address of array
    printf("The value of marks[1]: %d\n", marks[1]);
    printf("The address of marks[1]: %d\n", &marks[1]); // we
    printf("The value of marks[2]: %d\n", marks[2]);
    printf("The value of marks[3]: %d\n", marks[3]);
    // can we change the value of array? if we later define any array with new value...let's see
    marks[2] = 50;
    printf("The value of marks[2] After giving it new value: %d\n", marks[2]);// so yeah it can change

    return 0;
}