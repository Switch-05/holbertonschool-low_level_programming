#include <stdio.h>
/*
 *Alphabet R
 *
 */

/**
 * main - show alphabet in reverse.
 *
 * Description: "Write a program that prints the alphabet in reverse".
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char letra;

	for (letra = 'z'; letra >= 'a'; letra--)
	{
		putchar(letra);
	}
	putchar('\n');
	return (0);
}
