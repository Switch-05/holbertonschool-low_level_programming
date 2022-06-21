/*
 *file: 1-alphabet.c
 *author: David G
 */

#include "main.h"

/**
 * main -  prints the alphabet, in lowercase.
 *
 * @void: void.
 * Return: Always 0.
 */
void print_alphabet(void)

{
	char letra;
	for (letra = 'a'; letra <= 'z'; letra ++)
	{
		_putchar (letra);
	}
	_putchar ('\n');
}
