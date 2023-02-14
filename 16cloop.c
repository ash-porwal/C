// continue in loop
#include<stdio.h>

int main(){
    int skip=5, i=0;
    while(i<10){
        i++;
        if(i!=skip){ // here we are saying if i value is not equal to skip value then continue means it will jump to line number 6
            continue; // yha par continue means agar i ki value skip na hui which is 5 to wo continue loop mein chla jayega
        }             // i.e. wo continue padhne ke baad dobsra upar chala jayega loop mein
        else{
            printf("%d\n", i);
        }
    }
    return 0;
}