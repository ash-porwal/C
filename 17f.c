// intro of function
#include <stdio.h>
void display(); // Function prototype ..means batana compiler ko that we are making a display.... here we can write anything instead of display just like variable
int main()
{
    int c = 1;
    printf("Initializing the display\n");
    display(); // Function call ..here that function def will be executed
    printf("Display function finished its work %d\n", c);
    return 0;
}

void display()
{ // Function definition
    printf("Hi I am display\n");

}
// control of function means wo function jo work kar raha ho