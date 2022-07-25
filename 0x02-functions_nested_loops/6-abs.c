#include "main.h"

/**
 * _abs - Computes absolute value
 * @l: Takes an integer
 * Return: The positive value of l
 */

int _abs(int l)
{
	if (l < 0)
		return (l * -1);
	return (l);
}
