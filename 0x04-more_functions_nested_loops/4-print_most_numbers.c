#include "main.h"

/**
 * print_most_numbers - Prints numbers except some
 */

void print_most_numbers(void)
{
	int n;

	for (n = '0'; n <= '9';)
	{
		if ((n == '2') || (n == '4'))
			n++;
		else
		{
			_putchar(n);
			n++;
		}
	}
	_putchar('\n');
}
