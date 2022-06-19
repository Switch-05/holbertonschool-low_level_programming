#include <stdio.h>
/*
 *Hexa
 *
 */

/**
 * main - show hexadecimal numbers.
 *
 * Description: "Write a program that prints all the numbers of base 16 ".
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int num;

	for (num = 48; num <= 102; num++)
	{
		if (num <= 57 || num >= 97)
			putchar(num);
	}
	putchar('\n');
	return (0);
}
