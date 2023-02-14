// we can write file too

#include<stdio.h>

int main(){
    FILE *fptr;
    int number = 45;
    fptr = fopen("gen.txt", "w"); // we dont even have gen.txt file but when u run this programm ..it will automatically create gen.txt file
    fprintf(fptr, "The number is %d\n", number); // fprintf helps us in writing in the file
    fprintf(fptr, "Thanks for using fprintf", number);
    fclose(fptr);

    return 0;
}
// if the file doresnot exists then while writing the file it will automatically generate the file
// and in that file " the number is 45 will automatically be writen"