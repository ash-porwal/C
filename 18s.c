#include<stdio.h>
// here at line number 3....sum is a function(we can name it any thing) which takes a and b as input and returns an integer as an output so  that's is why we wrote int and not void
int sum(int a, int b, char *type); // function prototype declaration..here a and b are parameters
int main(){
    // sum(2, 15, "Substraction"); // function call ..here 2, 15 are agruments ..jo actual value hoti hai ..yani ki jo actual value di jati hai
    int y = sum(2, 15, "Substraction");
    printf("value of y %d\n", y);
    int x = sum(1,2,"add") * 50;

    printf("The value of sum is %d\n", sum(2, 10, "abc_hello"));
    printf("The value of x is %d\n", x);
    return 0;
}

int sum (int a, int b, char *type){ // 
    if(type == "add"){
        return a+b;
    }
    else {
        return a - b;
    }
    // int c;
    // c = a + b;
//     return a+b; or return c;
}
// if we want to add char inside function we have to add *
/* jo function value leta hai i.e. actual value usko parameters bolte hai
   jo function value de wo hota hai return value */