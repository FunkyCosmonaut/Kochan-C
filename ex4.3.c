#include <stdio.h>

int main(void){

	int triangularNumber;


	for (int i = 0; i <= 50; i = i + 5){
		triangularNumber = (i * (i + 1)) / 2;
		printf("%i\n", triangularNumber);
	}

	return 0;
}
