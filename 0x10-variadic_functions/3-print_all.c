#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - Prints a character.
 * @args: The va_list containing the character to print.
 * @separator: The string to be printed between the characters.
 */
void print_char(va_list args, char *separator)
{
	char ch = va_arg(args, int);

	printf("%s%c", separator, ch);
}

/**
 * print_int - Prints an integer.
 * @args: The va_list containing the integer to print.
 * @separator: The string to be printed between the integers.
 */
void print_int(va_list args, char *separator)
{
	int num = va_arg(args, int);

	printf("%s%d", separator, num);
}

/**
 * print_float - Prints a float.
 * @args: The va_list containing the float to print.
 * @separator: The string to be printed between the floats.
 */
void print_float(va_list args, char *separator)
{
	float f = va_arg(args, double);

	printf("%s%f", separator, f);
}

/**
 * print_string - Prints a string.
 * @args: The va_list containing the string to print.
 * @separator: The string to be printed between the strings.
 */
void print_string(va_list args, char *separator)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s%s", separator, str);
}

/**
 * print_all - Prints anything.
 * @format: The format string indicating the types of arguments.
 *
 * Description: The format string can contain the following specifiers:
 *    - 'c' to print a char
 *    - 'i' to print an integer
 *    - 'f' to print a float
 *    - 's' to print a char *
 *    - Any other char should be ignored
 *    - If the string is NULL, "(nil)" will be printed instead
 *
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			print_char(args, separator);
			break;
		case 'i':
			print_int(args, separator);
			break;
		case 'f':
			print_float(args, separator);
			break;
		case 's':
			print_string(args, separator);
			break;
		default:
			i++;
			continue;
		}

		separator = ", ";
		i++;
	}

	va_end(args);
	printf("\n");
}
