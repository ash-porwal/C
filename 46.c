//now we are making a progrmamme in whuch we can read whole file just by using fgetc
#include<stdio.h>

int main(){ 
    FILE *ptr; // file pointer
    char c;
    ptr = fopen("getcdemo.txt", "r");
    c = fgetc(ptr); // we made fgetc to read programme but till when ...so for this we made char c at line 6... so we made c equals to fgetc ..so fgetc will return end of file..then we want that we will stop 
    while(c!=EOF){ // now we will stop when value of c equals to EOF ..so EOF is end of file ..so we made while loop
        printf("%c", c);
        c = fgetc(ptr);
    }
    return 0;
}