
#include <stdio.h>

int main(void){

	int fibonacci1,fibonacci2,fibonacci3, i;

	fibonacci1 = 0;
	fibonacci2 = 1;

	printf("\n%i %i ", fibonacci1, fibonacci2);

	for( i = 2; i < 15; ++i){
		fibonacci3 = fibonacci1  + fibonacci2;
		fibonacci1 = fibonacci2;
		fibonacci2 = fibonacci3;
		printf("%i ", fibonacci3);
	}


	return 0;
}
