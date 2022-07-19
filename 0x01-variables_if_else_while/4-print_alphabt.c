#include <stdio.h>

/**
 * main - Prints all alphabets except e and q
 * Return: 0
 */

int main(void)
{
	int let;

	for (let = 'a'; let <= 'z'; let++)
	{
	if (let != 'e' && let != 'q')
	putchar(let);
	}
	putchar('\n');
	return (0);
}
