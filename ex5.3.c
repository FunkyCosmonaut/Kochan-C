#include <stdio.h>
#include <stdbool.h>

int main(void)
{


	int value1, value2;
	float output;
	int remainder;

	
	printf("Enter 2 numbers to divide.\n");
	scanf("%i %i", &value1, &value2);


	if (value2 == false)
		printf("Division by zero not allowed.\n");
	else {
		output = (float) value1 / value2;
		remainder = value1 % value2;

		if(remainder == false)
			printf("%i divided by %i is %.0f\n", value1, value2, output);
		else
			printf("%i divided by %i is %.3f\n", value1, value2, output);

	}
	return 0;
}




// divides two numbers
