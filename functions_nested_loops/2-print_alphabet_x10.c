/*
 * file: 2-print_alphabet_x10.c
 * author: David G
 */

#include "main.h"

/**
 * print_alphabet_x10 - print alphabet x10 times.
 * @void: void.
 *
 * Return: void.
 */
void print_alphabet_x10(void)
{
	int n;
	char letra;

	for (n = 0; n <= 9; n++)
	{
		for (letra = 'a'; letra <= 'z'; letra++)
		{
			_putchar(letra);
		}
		_putchar('\n');
	}
}
