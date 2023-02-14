// Switch case
#include <stdio.h>

int main()
{
    int rating;
    do
    {
        printf("Rate this program (1 to 5)\n");
        scanf("%d", &rating);
    } while (rating < 0 || rating > 5); //  yaha par while ke brackets mein check ye ho raha ki agar rating 0 se 5 nahi hui toh compiler do mein wapis jayega..aur hammne OR(||) case ish liye lagaya kyuki hamne 0 se choti aur 5 se badi value check karni thi..toh ye loop mein doobara jaye agar koi ek value false ho jaye

    switch (rating) // inside this parenthesis ..we write that jiski hamne value check karni for ex. rating hai isme aue case mein 1 hai line no. 13 mein wo rating 1 hai...ab koi ne rating 1 di toh wo ye wala switch case lagayega
    {
    case 0:
        printf("We will try to improve please give us feedback! and use our service again THANK YOU!!\n");
        break;

    case 1: // here this is not case number 1 but '1' is a value which is we taking from the user...for ex. if we want to take any name like cat then we have to make case of cat .. i.e. Case 'cat'.. here cat is an alphabet so in string
        printf("Your rating is 1\n");
        break; // we added break because to break the rating once it gets its value
    case 2:    // if we dont add break then if we give rating 1 then it will show every rating after 1
        printf("Your rating is 2\n");
        break;
    case 3:
        printf("Your rating is 3\n");
        break;
    case 4:
        printf("Your rating is 4\n");
        break;
    case 5:
        printf("I appreciate your 5 stars THANK YOU\n");
        break;
    }
    return 0;
}
// if we wont use break then all the cases will print from where the value is true