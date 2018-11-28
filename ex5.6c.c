#include <stdio.h>

// This is super hackey

int main(void){

	int number, workingnumber, workingnumber2;
	int reconstruction;
	int finalnumber, finalnumber2 = 0;
	int placevalue = 1;

	int state = 1;

	do {
		scanf("%i", &number);
		workingnumber2 =number;
		workingnumber = number;
		reconstruction = 0;

		while(workingnumber2 >= 9) {
			workingnumber = workingnumber2;
			while ((workingnumber % 10) > 0){                     //isolates the first number
				workingnumber = workingnumber / 10;     //and tells you the placevalue
				placevalue = placevalue * 10;
			}
		
		reconstruction = (workingnumber * placevalue) + reconstruction;
		workingnumber2 = workingnumber2 / 10;
		}
		
		printf("%i\n", reconstruction);
		printf("%i\n", placevalue);
		placevalue = 1;
	




	}
	while(state != 0);
}
