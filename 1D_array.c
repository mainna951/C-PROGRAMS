//1D array

/*
NAME: JOSEPH THUO MAINA
REG NO: CT100/G/26131/25
DATE: 29th OCT 2025
DESC: 1D array that calculates and displays the total weekly revenue and average daily revenue
*/

#include <stdio.h>

int main(){
	float revenue[7];
	float total=0, average;
	int i;
	
	//input revenue for each day
	printf("Enter revenue for each day of the week: \n");
	for(i=0; i<7; i++){
	printf("Day %d: ", i+1);
scanf("%f", &revenue[i]);
total += revenue[i];

	}
//calculating average
average=total/7;

//display results of total and average
printf("\n Total weekly revenue= %.2f \n", total);
printf("average daily revenue = %.2f \n", average);

	
	return 0;
}