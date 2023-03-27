#include "main.h"

/**
 * print_rev - prints a string in reverse,
 * followed by a new line
 *
 * @s: the string to be reversed
 *
 * Return: always return the reverse of a string
 */

void print_rev(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	for (j -= 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
