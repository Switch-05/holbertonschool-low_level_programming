/*
 *file: 1-alphabet.c
 *author: David G
 */

#include "main.h"

/**
 *print_alphabet - "print_alphabet in lowercase".
 *
 *@void: void.
 *
 *Return: void.
 */

void print_alphabet(void)

{
	char letra;

	for (letra = 'a'; letra <= 'z'; letra++)
	{
		_putchar (letra);
	}
	_putchar ('\n');
}
