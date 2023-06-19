#include <stdio.h>

/**
 * main - A program that prints lowercase letters in reverse
 * Return:0 (success)
 */

int main(void)
{
	char low = 'z';

	while (low >= 'a')
	{
		putchar(low);
		low--;
	}
	putchar('\n');
	return (0);
}
