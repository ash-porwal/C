// making a code to find grades of students by cases
#include<stdio.h>
int main()
{
   int score;

   printf("Enter score( 0-100 ): ");
   scanf("%d", &score);

   switch( score / 10 )
   {

   case 10:
      printf("Excellent");
      break;
   case 9:
     printf("Grade: A");
     break;

   case 8:
     printf("Grade: B");
     break;

   case 7:
     printf("Grade: C");
     break;

   case 6:
     printf("Grade: D");
     break;

   case 5:
     printf("Grade: E");
     break;

   default: // default is when none of the cases or input matches..for example if u type 1000 in input it gonna give F grade
     printf("Grade: F");
     break;

   }

   return 0;
}