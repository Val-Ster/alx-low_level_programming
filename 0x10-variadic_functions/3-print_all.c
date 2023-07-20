#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints values based on the given format specifier.
 * @format: A string containing format specifiers for the arguments.
 *          c: char
 *          i: integer
 *          f: float
 *          s: char * (if the string is NULL, print (nil) instead)
 *          Any other character should be ignored.
 */
void print_all(const char * const format, ...)
{
	va_list args;

	va_start(args, format);
	char c;
	int i;
	float f;
	char *s;

	while (*format)
	{
		if (*format == 'c')
		{
			c = va_arg(args, int);
			printf("%c", c);
		}
		else if (*format == 'i')
		{
			i = va_arg(args, int);
			printf("%d", i);
		}
		else if (*format == 'f')
		{
			f = va_arg(args, double);
			printf("%f", f);
		}
		else if (*format == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
		}
		format++;
	}

	va_end(args);
	printf("\n");
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_all("cifs", 'A', 42, 3.14, "Hello");
	print_all("csfi", "World", NULL, 17, 2.71);
	return (0);
}
