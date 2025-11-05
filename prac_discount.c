/*
discount
amount below 500= no discount
amount between 500 and 1000= 5% discount
amount between 1000 and 5000 = 10% discount
amount over 5000  = 15 % discount
*/

#include <stdio.h> // scanf, printf

int main(){
	int amount, discount;  //variable declaration
	
	//computing discount
	if(amount>5000){
		discount= 0.15*amount;
	}
	if(amount<=5000 && amount>1000){
		discount=0.1*amount;
	}
	if(amount<=1000 && amount>500){
		discount=0.5*amount;
	}
	else
		discount=0;
	
	
	printf("********************************* \n");
	printf("Enter purchase amount Ksh. ");
	scanf("%i", &amount );
	printf("amount= "%i", &amount ");
	
	return 0;
}