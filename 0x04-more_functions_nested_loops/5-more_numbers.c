#include "main.h"

/**
 * more_numbers - prints numbers between 0 to 14 ten times
 */

void more_numbers(void)
{
	int c, d;

	for (c = 0; c <= 9; c++)
	{
		for (d = 0; d <= 14; d++)
		{
			_putchar(d);
		}
		_putchar('\n');
	}
}
