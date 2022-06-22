/*
 * file: 3-islower.c
 * author: David G
 */

#include "main.h"

/**
 * _islower - Function that checks for lowercase.
 *
 * @c: Character to be tested.
 *
 * Return: 1 if lowercase, 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
