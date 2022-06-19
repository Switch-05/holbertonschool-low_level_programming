#include <stdio.h>
/**
 * main - Program that prints the alphabet in lowercase.
 *
 * Description: Print all the letters except q and e.
 * Only use the putchar and only use it twice.
 * Return: Zero always.
 */
int main(void)
{
	char letra;

	for (letra = 'a'; letra <= 'z'; letra++)
	{
		if (letra != 'e' && letra != 'q')
		{
			putchar(letra);
		}
	}
	putchar('\n');
	return (0);
}
