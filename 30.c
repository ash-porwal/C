// string - A string is a 1-d character array terminated by a null(‘\0’) => {this is null character}
/*  Initializing Strings
Since string is an array of characters, it can be initialized as follows:

char s[]={‘A’,'B','C','D','E,'\0'}

There is another shortcut for initializing strings in c language:

char s[]= "ABCDE"; ..we are just putting it in double quote   => In this case C adds a null character automatically. */

#include<stdio.h>

int main(){
    // char str[] = {'H', 'a', 'r', 'r', 'y', '\0'};
    char str[] = "Harry";
    printf("This is my name : %s\n",str); // this is how we print string
    return 0;
} 