#include <stdio.h>

/**
 * main - Prints all aphabets
 * Return: 0
 */

int main(void)
{
	int let;

	for (let = 97; (let > 96) && (let < 123); let++)
		putchar(let);
	for (let = 65; (let > 64) && (let < 91); let++)
		putchar(let);
	putchar(10);
	return (0);
}
