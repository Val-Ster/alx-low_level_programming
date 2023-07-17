#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the name of the file it was compiled from.
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("The file name is: %s\n", __FILE__);
	return (0);
}
