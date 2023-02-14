//  A structure in c is a collection of variables of different types under a single name means we can hold dissimlar values like int, float, char unlike array and strings which hold similar values
/* Structures -  For dealing with collections, C provides a data type called ‘structure’. A structure gathers
together, different atoms of information that comprise a given entity
*/
#include<stdio.h>
#include<string.h>

struct employee{ // here we want employee dertails so we are creating structure and we are defining whhatever we want inside employee
    int id; // hame jo bhi chahiye wo yha par likh rahe hai
    float salary;
    char name[10];
};

int main(){
    // int a =34;
    // char b;
    // float d = 234.3543;
    // employee e1;
    // e1.salary = 34.454; --->wont work without employee structure

    struct employee e1; //struct is just like int ..here e1 is one employee name
    e1.id = 445; // HERE DOT(.) IS MEMBER OPERATOR
    e1.salary = 90000;
    // e1.name = "Bond"; --> wont work // because this is character array and not pointer
    strcpy(e1.name, "Bond");

    printf("%d\n", e1.id);
    printf("%.1f\n", e1.salary); // if we want float value in 2.0 means point ke baad single zero ho toh %.1f likhna hai instead of %f...similarly .2f for two zeros after point and so on
    printf("%s\n", e1.name);

    return 0;
}