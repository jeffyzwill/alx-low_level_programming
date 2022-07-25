#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @d: accepts a digit
 * Return: Returns the last digit
 */

int print_last_digit(int d)
{
	int ld = d % 10;

	if (d < 0)
		ld = ld * -1;
	_putchar(ld + '0');
	return (ld);
}
