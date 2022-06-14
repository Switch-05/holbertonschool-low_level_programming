/** C program to print size of various types on the computer */

#include <stdio.h>

/**
 * main - print
 *
 *Description: print diferent types of the computer
 *Return: always 0 (success)
 */
int main(void)
{
	printf("Size of a char: %1d byte(s)\n", sizeof(char));
	printf("Size of an int: %1d byte(s)\n", sizeof(int));
	printf("Size of a long int: %1d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %1d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %1d byte(s)\n", sizeof(float));

	return (0);
}
