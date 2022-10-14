#include <stdio.h>
/**
 * main - Print the Alphabet
 * Return: always (0) success
 */
int main(void)
{
	char aph[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(aph[i]);
	}
	putchar('\n');
	return (0);
}
