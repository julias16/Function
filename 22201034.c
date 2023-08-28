#include <stdio.h>
float convert_to_gbp (float amount)
{

    float gbp ;
    gbp = amount * 0.73;
    return gbp;

}
float convert_to_euro (float amount)
{

    float euro;
    euro = amount * 0.85;
    return euro;

}
float input_amount ()
{

    float amount;
    printf("Please Enter the Amount of Money you want to convert from USD : ");
    scanf("%f",&amount);
    return amount;

}

int main ()
{
    float amount, gbp, euro;
    char convert;
    amount = input_amount();
    printf("\nPlease choose the Type of Currency you want to convert : \n\n");
    printf("\tCurrency\t---->\t Input Type\n\n");
    printf("\tEURO\t\t---->\t E\n");
    printf("\tGBP\t\t---->\t G\n\n");
    printf("Enter your choice: ");
    scanf(" %c",&convert);

    if (convert == 'G' || convert == 'g')
    {
        gbp = convert_to_gbp (amount);
        printf("\t%.2f (USD) is equivalent to %.2f (GBP)\n",amount,gbp);

    }
    else if (convert == 'E' || convert == 'e')
    {
        euro = convert_to_euro (amount);
        printf("\t%.2f (USD) is equivalent to %.2f (EUR)\n",amount,euro);

    }
    else
    {
        printf("\tInvalid Convert Option !!!\n");
    }
    return 0;
}
