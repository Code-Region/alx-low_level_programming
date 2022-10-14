#include <stdio.h>
/**
 * All your code should be in the main function
 * You can only use putchar twice in your code
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
