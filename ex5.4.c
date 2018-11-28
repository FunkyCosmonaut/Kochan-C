#include <stdio.h>
#include <stdbool.h>


int main(void){

	int number;
	char operator;
	float accum = 0;
	int state = true;

	printf("Enter a number followed by operator\n");
	printf("Valid Operators: + - * / S E\n");


	while(state != 0){
		scanf("%d %c", &number, &operator);
		
		switch(operator){

			case 'S':
				accum = number;
				printf("accumulator set to %f\n", accum);
				break;
			case 'E':
				printf("End of program\n");
				state = false;
				break;
			case '+':
				accum = accum + number;
				printf("%f\n", accum);
				break;
			case '-':
				accum = accum - number;
				printf("%f\n", accum);
				break;
			case '*':
				accum = accum * number;
				printf("%f\n", accum);
				break;
			case '/':
				if(number == 0 || accum == 0){
					printf("can't divide by 0\n");
					break;
				}
				else {
					accum = accum / number;
					printf("%f\n", accum);
					break;
				}
			default:
				printf("Unknown operator\n");
				break;
		}
	}
	return 0;
}



