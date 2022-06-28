/*
 * file: 4-isalpha.c
 * author: David G
 */
#include "main.h"

/**
 * print_last_digit - Checks for alphabetic character.
 * @n: Character to be tested
 *
 * Description: Checks if lowercase or uppercase.
 * Return: 1 if c is a letter, 0 otherwise.
 */
int print_last_digit(int n)
{
	int num;

	num = n % 10;
	if (num < 0)
	{
		num = num * -1;
	}
	_putchar(num + 48);
	return (num);
}
