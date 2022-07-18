#include <stdio.h>

/**
 * main - Prints all lower case alphabets
 * Return: 0
 */

int main(void)
{
	int let;

	for (let = 97; (let > 96) && (let < 123); let++)
		putchar(let);
	return (0);
}
