#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** Last digit*/

/**
*
*main - imprime el último digito
*
*Description "compara el último digito e imprime mayor, menor o igualdad"
*Return zero (success)
*/
int main(void)
{
	int n, lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;
	if (lastdigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastdigit);
	}
	if (lastdigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastdigit);
	}
	if (lastdigit < 6 && ~0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, lastdigit);
	}
	return (0);
}
