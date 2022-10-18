#include "main.h"

/**
 * _islower - check for small letters.
 * Return: 1 if c is lower and 0 other wise
 */

int _islower(int c)
{
	for (c = 'a'; c <= 'z'; c++)
		return (1);
	else
		return(0);
	_putchar('\n');
}
