/*
discount
amount less than 1000, no discount
between 1000 and 5000, 5% discount
greater than 5000, 10% discount
*/

#include <stdio.h>

int main() {
	float amount, discount;
	printf("Enter purchase amount: ");
	scanf("%f", &amount);
	
	if(amount>5000){
		discount = 0.1*amount;

	}
	else if(amount>=1000 && amount>=5000){
		discount = 0.05*amount;
	}
	else
	{
		discount = 0;
	}
	
	printf("The discount is Ksh. %.2f", discount);
	
	
	return 0;
}