#include "main.h"

/**
 * print_line - Prints a straight line
 * @n: Number of lines to print
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
