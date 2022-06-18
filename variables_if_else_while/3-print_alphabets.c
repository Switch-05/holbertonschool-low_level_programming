#include <stdio.h>
/*
 *Alphabet low and upper
 *
 */

/**
 *main - show alphabet.
 *
 *Description: "Write a program that prints the alphabet
 *in lowercase and in uppercase".
 *Return: Always 0 (success)
 *
 */
int main(void)
{
	char letra;

	for (letra = 'a'; letra <= 'z'; letra++)
	{
		putchar(letra);
	}
	for (letra = 'A'; letra <= 'Z'; letra++)
	{
		putchar(letra);
	}
	putchar('\n');
	return (0);
}
