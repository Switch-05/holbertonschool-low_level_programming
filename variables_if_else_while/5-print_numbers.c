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
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar ('\n');
	return (0);
}
