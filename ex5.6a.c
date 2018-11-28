#include <stdio.h>

int main(void)
{

	int number, right_digit;
	int placevalue = 1;
	int count = 1;	
	int finalnumber = 0;//reverse
	int detect;


	printf("Enter your number.\n");
	scanf("%i", &number);

	do {
		right_digit = number % 10;
	//	printf("%i", right_digit);
		number = number / 10;
		count = placevalue * right_digit;
		printf("%i\n", count);
		detect = count / placevalue;

			switch(detect){
				case 0:
					printf("zero ");
					break;
				case 1:
					printf("one ");
					break;
				case 2:
					printf("two ");
					break;
				case 3:
					printf("three ");
					break;
			}
						
		finalnumber = finalnumber + count;
		placevalue = placevalue * 10;
	}    
	while (number != 0);
	printf("\n");
	printf("%i\n", finalnumber);

	printf("\n");

	return 0;
}
