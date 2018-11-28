#include <stdio.h>

int main(void){

	int factorial = 1;
	int i, x;
	int n = 1;

	printf("\nFactorials 1-10\n");
	printf("---------------\n");
	for( x = 1; x <= 10; x++){
	
		for (i = 1; i <= x; ++i){
			factorial = i * factorial;
		}
	
		printf("%2i!  =  %i\n", x , factorial);
		factorial = 1;
		
	}

	return 0;
}
