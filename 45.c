// fgetsc - is a function which helps us in reading file character by character 
// but somehow i cant read this file
#include<stdio.h>

int main(){
    FILE *ptr;
    // ptr = fopen("getcdemo.txt", "r");
    // char c = fgetc(ptr);
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));

    ptr = fopen("getcdemo.txt", "w");
    putc('c', ptr); // this is how we can add character in a file and this will be first character 
    putc('c', ptr); // this will be second character
    putc('c', ptr); // and this will be third   
    fclose(ptr);
    return 0;
}
/* fgetc(ptr); => Used to read a character from file (but single character)

fputc(‘c’,ptr);=> Used to write character 'c' to the file (but single character)*/