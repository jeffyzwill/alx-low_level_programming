#include "main.h"

/**
 * _isupper - Checks if upper
 * @c: Character to check
 * Return: An integer of either 1 or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
