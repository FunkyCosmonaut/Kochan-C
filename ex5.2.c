#include <stdio.h>

int main(void){

	int numb1, numb2;
	int out;
	
	printf("Enter two numbers. \n");
	scanf("%i %i", &numb1, &numb2);

	out = numb1 % numb2;

	if ( out == 0)
		printf(" %i is divisible by %i\n", numb1, numb2);
	else
		printf(" %i is not divisible by %i\n", numb1, numb2);

	return 0;
}
