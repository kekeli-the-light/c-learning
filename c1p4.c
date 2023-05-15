#define PI 3.142 
#include <stdio.h>

int main()
{
    float amount, with_tax;
    float tax = 0.05f;
	printf("Enter an amount: ");
	scanf("%f",&amount);
	with_tax = (amount*tax)+amount;
	printf("With tax added: $%f", with_tax);

    return 0;
}
