/*
 * file: 6-abs.c
 * author: David G
 */
#include "main.h"

/**
 * int _abs - computes the absolute value of an integer.
 * @n: integer to be tested.
 *
 * Description: "computes the absolute value of an integer".
 *
 * Return: always zero.
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
		n = _abs(n);
	}
	if (n < 0)
	{
		return (n);
		n = _abs(n);
	}
	if (n == 0)
	{
		return (n);
		n = _abs(n);
	}
	return (n);
}
