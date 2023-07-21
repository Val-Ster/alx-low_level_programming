#include <stdio.h>
#include <stdlib.h>

void print_opcodes(int num_bytes);

/**
 * print_opcodes - Print the opcodes of the main function
 * @num_bytes: The number of bytes to print
 */
void print_opcodes(int num_bytes)
{
	unsigned char *main_opcodes = (unsigned char *)print_opcodes;

	int i;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", main_opcodes[i]);
	}
	printf("\n");
}

/**
 * main - Entry point of the program
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments
 *
 * Return:0 on success, 1 if incorrect number of arguments, 2 if the number of bytes is negative or zero
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes <= 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes(num_bytes);
	return (0);
}
