#include <stdio.h>
/*
 *Numbers
 *
 */

/**
 * main - show numbres.
 *
 * Description: "Write a program that prints all single digit numbers
 * of base 10 starting from 0 ".
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	putchar ('\n');
	return (0);
}
