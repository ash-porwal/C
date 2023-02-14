//check2
#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks \n");
    scanf("%d", &marks);

    if (marks < 100 && marks >= 90) {
        printf("You got Grade A \n");
    }
    else if (marks < 90 && marks >= 80)
    {
        printf("You got Grade B \n");
    }
    else if (marks < 80 && marks >= 70)
    {
        printf("You got Grade C \n");
    }
    else {
        printf("You have to work hard your marks are less than 70");
    }

   return 0;
}