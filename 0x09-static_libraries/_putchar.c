#include "main.h"
#include <unistd.h>

/**
 * _putchar - my write
 * @c: input
 * Return: c
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
