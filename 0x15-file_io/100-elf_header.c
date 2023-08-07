#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

#define ELF_BUF_SIZE 64

/**
 * error_exit - Prints an error message to stderr & exits with the given code.
 * @msg: The error message to print.
 * @code: The exit code.
 */
void error_exit(const char *msg, int code)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(code);
}

/**
 * main - Displays the ELF header of an ELF file.
 * @ac: The number of arguments.
 * @av: An array of arguments.
 *
 * Return: 0 on success, 98 on incorrect argument count, 99 on read error,
 *         and 100 on close error.
 */
int main(int ac, char **av)
{
	int fd, bytes_read, i;
	char buffer[BUF_SIZE];

	if (ac != 2)
		error_exit("Usage: elf_header elf_filename", 98);

	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		error_exit("Error: Can't read from file", 99);

	bytes_read = read(fd, buffer, BUF_SIZE);
	if (bytes_read == -1)
	{
		close(fd);
		error_exit("Error: Can't read from file", 99);
	}
	printf("ELF Header:\n");
	for (i = 0; i < 16; i++)
		printf("  %02x", buffer[i] & 0xff);
	printf("\n");

	close(fd);
	return (0);
}

