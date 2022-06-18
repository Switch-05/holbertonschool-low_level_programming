#include <stdio.h>
/*
 *Alphabet
 *
 */

/**
 * main - show alphabet.
 *
 * Description: "Write a program that prints the alphabet in lowercase".
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char letra;

	for (letra = 'a'; letra <= 'z'; letra++)
	{
		putchar(letra);
	}
	putchar('\n');
	return (0);
}
