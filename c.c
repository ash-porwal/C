#include <stdio.h>
void display(); // Function prototype ..means batana compiler ko that we are making a display

int main()
{
    printf("Initializing the display\n");
    display(); // Function call ..here that function def will be executed
    printf("Display function finished its work\n");
     return 0;
}

void display()
{ // Function definition
    printf("Hi I am display\n");
}
