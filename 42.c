// this is sample text file
#include <stdio.h>

int main(){
    FILE *ptr; // here FILE is a strucutre and we are making pointer so adding point star...pointer is needed to communicate between file and extension
    ptr = fopen("sample.txt", "r" ); // ptr=fopen(“filename.ext”,”mode”); here "r" shows read mode....and we call filename.ext file name with extension
    ptr = fopen("sample.txt", "w" ); // for writing the file
    
    return 0;
}
// there is one mode called Append mode ...its means is to add something at the end of the name
// like one file consists sentence - I'm Ashish 
// now i'll append it like - I'm AshishPorwal - i added porwal at the end... so i just  append ...append means to add something at the end of the name
// binary files will look weird like ..??? and you see the symbols