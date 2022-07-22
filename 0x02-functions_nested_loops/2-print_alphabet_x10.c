#include "main.h"

/**
 * print_alphabet_x10 - Entry point of code
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	char let;

	for (let = 'a'; let <= 'z'; let++)
		_putchar(let);
	_putchar('\n');
	}
}
