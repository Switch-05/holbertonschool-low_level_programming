/*
 * file: 6-abs.c
 * author: David G
 */
#include "main.h"

/**
 * int _abs(int) - computes the absolute value of an integer.
 * int: integer to be tested.
 *
 * Description: computes the absolute value of an integer.
 * Return: always zero.
 */
int _abs(int n)
	
{
	if (n > 0)
	{
		return (n);
		n = _abs (n);
	}
	if (n < 0)
	{
		return (n);
		n = _abs (n);
	}
	if (n == 0)
	{
		return (n);
		n = _abs (n);
	}
	return (n);
}
