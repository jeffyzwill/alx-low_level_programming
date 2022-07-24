#include "main.h"

/**
 * print_sign - Prints the sign of numbers
 * @n: Accepts an integer
 * Return: either 0, 1, -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
