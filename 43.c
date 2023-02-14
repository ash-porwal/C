// we can also write an integer from a particular file..using fscanf
#include <stdio.h>

int main(){
    /* if we wanna check if this file exists or not then we have to do like this
    if (ptr == NULL){
        printf("this file doesn't exists\n");
    } // and if exists then we do else here
    else {
    and this all must be written i mean from line 6 must be written after making a pointer file
    this close bracel of else must come at line 23 so it will do else part..im not doing this because im commmenting 
means if file exists kar rahi hai to saara content else mein jayega
*/
    
    FILE *ptr;
    int num; // we want to read some number so we are taking some random varialbe
    int num2; // if we want to read next integer
    ptr = fopen("s2.txt", "r");
    fscanf(ptr, "%d", &num); // fscanf helps us in reading the file...if we want to read what is inside the file
    fscanf(ptr, "%d", &num2); // if we dont write this then it wont read the next integer and will give us random value of next integer
    fclose(ptr); // if we open our file then we have to close too 

    printf("First value of that file consist : %d\n", num);
    printf("Second value of that file consist : %d\n", num2); 

    return 0;
}
// but if we are writng some alphabet in that s2.txt file then we are getting random pratice