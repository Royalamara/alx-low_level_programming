#include <unistd.h>

/**
 * _putchar - writes the charater c to stodout
 * @c : The charater to print
 * Return: on success 1.
 * on error, -1 is returned,and error is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c,1));
}
