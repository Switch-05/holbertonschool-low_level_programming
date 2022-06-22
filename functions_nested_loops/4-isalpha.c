/*
 * file: 4-isalpha.c
 * author: David G
 */
#include "main.h"

/**
 * _isalpha - Checks for alphabetic character.
 * @c: Character to be tested
 *
 * Description: Checks if lowercase or uppercase.
 * Return: 1 if c is a letter, 0 otherwise.
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	if (c  >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
