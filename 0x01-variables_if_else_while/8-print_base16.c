#include <stdio.h>
/**
 * main - Print base 16 .
 * Return: success.
 */
int main(void)
{
	int b;

	for (b = 48; b < 58; b++)
	{
		putchar(b);
	}
	for (int i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
