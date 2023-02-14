//writing a program whether a student is pass or fail; if it requires a total of 40% and at least 33% in each subject to pass

#include <stdio.h>

int main()
{
    int P, C, M;
    float total;

    printf("Enter your P marks\n");
    scanf("%d", &P);

    printf("Enter your C marks\n");
    scanf("%d", &C);

    printf("Enter your M marks\n");
    scanf("%d", &M);
    total = (P + C + M) / 3;

    if ((total < 40) || P < 33 || C < 33 || M < 33)
    {
        printf("Your total percentage is %f and you are FAIL\n", total);
    }
    else
    {
        printf("Your total percentage is %f and you are PASS\n", total);
    }
    return 0;
}
