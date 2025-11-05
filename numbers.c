/*
NAME: JOSEPH THUO
REG NO: CT100/G/26131/25
DATE: 09 OCT 2025
DESCRIPTION: C PROGRAM USING LOOP TO PRINT ALL THE NUMBERS FROM 100 TO 50 IN DESCENDING ORDER.
*/

#include <stdio.h> //PRE-PROCESSOR DIRECTIVE

int main () {
	int i;
	printf("numbers from 100 to 50 \n");
	for(i=100; i>=50; i--){
		printf("%d\n", i);
	}
	
	return 0;
}