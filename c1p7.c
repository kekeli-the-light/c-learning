#include <stdio.h>

int main(){
	float amount;
	int  b20, b10, b5, b1;
	printf("Enter amount: ");
	scanf("%f", &amount);
	b20 =(int)(amount/20);
	printf("$20 bills: %d\n", b20);
	float y = amount - (20*b20);
	b10 = (int)(y/10);
	printf("$10 bills: %d\n", b10);
	float x = y - (10*b10);
	b5 = (int)(x/5);
	printf("$5 bills: %d\n", b5);
	float z = x - (5*b5);
	b1 = (int)(z/1);
	printf("$1 bills: %d\n",b1);
	
	return 0;

}
