#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: always returns 0
 *
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z' ; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
