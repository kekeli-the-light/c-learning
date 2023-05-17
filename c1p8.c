#include <stdio.h>

int main()
{
    float loan,rate,monthly_rate,monthly_pay,balance,total_amount,rate_amount;

    printf("Enter Loan Amount: ");
    scanf("%f",&loan);
    printf("Rate(In percentage decimal): ");
    scanf("%f",&rate);
    printf("Enter Monthly Payment: ");
    scanf("%f",&monthly_pay);

    /*First Month Balance*/
    monthly_rate = rate/12;
    rate_amount = loan*monthly_rate;

    balance =(rate_amount+loan)-monthly_pay;
    printf("\nBalance Remaining After First Month: $%f",balance);

    /*Second Month Balance*/
    rate_amount = balance*monthly_rate;
    float balance2;
    balance2 =(rate_amount+balance)-monthly_pay; 

    printf("\nBalance Remaining After Second Month: $%f", balance2);

    /*Third Month Balance*/
    rate_amount = balance2*monthly_rate;
    float balance3;
    balance3 = (rate_amount+balance2)-monthly_pay;

    printf("\nBalance Remaining After Third Month: $%f\n",balance3);


    return 0; 
}