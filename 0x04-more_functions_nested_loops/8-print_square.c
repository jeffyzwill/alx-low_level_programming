#include "main.h"

/**
 * print_square - Prints square
 *
 * @size: Integer to set square size
 */

void print_square(int size)
{
	int j;
	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
