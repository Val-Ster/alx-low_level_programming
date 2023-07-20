#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}

/**
 * main - Entry point
 * Return: Always 0.
 */
int main(void)
{
	print_numbers(", ", 5, 1, 2, 3, 4, 5);
	print_numbers(" - ", 4, 10, 20, 30, 40);
	print_numbers(NULL, 3, 100, 200, 300);
	return (0);
}
