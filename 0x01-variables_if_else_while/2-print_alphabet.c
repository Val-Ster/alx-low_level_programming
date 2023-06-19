#include <stdio.h>

/**
 * main - A program that prints the alphabets in lowercase
 * Return:0 (success)
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter = letter + 1;
	}
	putchar('\n');
	return (0);
}
