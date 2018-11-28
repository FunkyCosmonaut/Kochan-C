#include <stdio.h>

int main(void)
{

	int i = 996;
	int j = 4;
	int next_multiple = i + j - i % j;

	printf("%i\n", next_multiple);

	i = 365;
	j = 7;
	next_multiple = i + j - i % j;


	printf("%i\n", next_multiple);

	i = 12,258;
	j = 23;
	next_multiple = i + j - i % j;


	printf("%i\n", next_multiple);
	return 0;
}
