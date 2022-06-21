#include <stdio.h>
/*
 *Combinations
 *
 */

/**
 * main - combinations.
 *
 * Description: "prints all possible combinations of single-digit numbers."
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n < 9)
		{
		putchar (48 + n);
		putchar (',');
		putchar (' ');
		}
		if (n == 9)
		{
			putchar (48 + n);
		}
	}
	putchar ('\n');
	return (0);
}
