#include <stdio.h>

int main(void){

	float inputarray[10];
	float const divisor = 10;
	float number, finalaverage;
	float hold = 0;
	int i;


	printf("Enter 10 numbers to find the averages of \n");

	for(i = 0; i < 10; i++){
		scanf("%f", &number);
		inputarray[i] = number;
	}

	for(i = 0; i < 10; i++){
		hold = inputarray[i] + hold;
	}

	finalaverage = hold / divisor;

	printf("%f", finalaverage);

	return 0;
	}


