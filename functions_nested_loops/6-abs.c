/*
 * file: 6-abs.c
 * author: David G
 */
#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: integer to be tested.
 *
 * Description: "computes the absolute value of an integer".
 *
 * Return: always zero.
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}
