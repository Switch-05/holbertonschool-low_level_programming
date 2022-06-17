#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** Last digit*/

/**
*
*main - imprime el último digito.
*
*Description: "compara el último digito e imprime mayor, menor o igualdad".
*Return zero (success)
*/
int main(void)
{
	int n, lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;
	printf("last digit of %d is %d", n, lastdigit);
	if (lastdigit > 5)
	{
		printf("and is greater than 5\n");
	}
	if (lastdigit == 0)
	{
		printf("and is 0\n");
	}
	if (lastdigit < 6 && lastdigit != 0)
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
