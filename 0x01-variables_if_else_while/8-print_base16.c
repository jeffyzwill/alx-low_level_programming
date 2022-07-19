#include <stdio.h>

/**
 * main - Prints all lower case in reverse
 * Return: 0
 */

int main(void)
{
	int let:

	for (let = 48; (let >= 48) && (let <= 57); let++)
		putchar(let);
	for (let = 97; (let >= 97) && (let <= 102); let++)
		putchar(let);
	putchar(10);
	return (0);
}
