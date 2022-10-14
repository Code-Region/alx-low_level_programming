#include <stdio.h>
/**
 * main - Print base 16 .
 * Return: success.
 */
int main(void)
{
	char a_f[6] = "abcdef";
	int b;

	for (b = 48; b < 58; b++)
	{
		putchar(b);
	}
	for (int i = 0; i < 6; i++)
	{
		putchar(a_f[i]);
	}
	putchar('\n');
	return (0);
}
