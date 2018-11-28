#include <stdio.h>

int main(void)
{

	int i = 256;
	int j = 7;
	int next_multiple = i + j - i % j;

	printf("%i\n", next_multiple);

	return 0;
}
