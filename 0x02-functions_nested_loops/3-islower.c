#include "main.h"

/**
 * _islower - Checks lowercase
 * @c: Takes in a character
 * Return: Either 0 or 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
