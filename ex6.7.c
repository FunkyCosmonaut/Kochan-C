#include <stdio.h>

int main(void)
{

	int n,i, j;
	int zer;


	printf("Enter nth's prime to generate to \n");
	scanf("%i", &n);

	int P[n];

	for( zer = 0; zer < n; zer++){
		P[zer] = 0;
	}


	//Sieve starts here:


	for(i = 2; i < n; ){
		if(P[i] == 0)
			printf("%i ", i);
			//P[i] = 0;
		for(j = 2; j * i <= n; j++){
			P[i*j] = 1;}
		++i;
	//	printf("%i ",P[i]);

	}
	return 0;
}

		

