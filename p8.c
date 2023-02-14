/* income tax paid by an employee to the government
Income Slab	Tax
2.5L-5.0L	5%
5.0L-10.0L	20%
Above 10.0L	30% */

#include <stdio.h>

char main(){

    float tax = 0; // we asssume that initially person is giving zero tax
    float income;
    printf("Enter your Income\n");
    scanf("%f", &income);
    float taxIncome = income - 250000;
    if (income > 250000 && income <= 500000)
    {
        tax = tax + 0.05 * taxIncome; // the value of tax will be increased above 250000 so we have to add
    }                                         // and there is 5% tax above 250000 so we multiply by 0.05

    if (income > 500000 && income <= 1000000)
    {
        tax = tax + 0.20 * (taxIncome);
    }
    if (income > 1000000){
        tax = tax + 0.30 * (taxIncome);
    }

    printf("Your net tax to be paid is %f\n", tax);

    return 0;
}
