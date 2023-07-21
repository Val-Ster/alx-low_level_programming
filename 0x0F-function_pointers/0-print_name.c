#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name using the provided printing function.
 * @name: Pointer to the name of the person.
 * @f: Pointer to the printing function to be used.
 *
 * Description: This function takes a name and a function pointer as arguments
 * and uses the provided printing function to print the name.
 * The printing function should have the following prototype:
 *   void printing_function(char *name);
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
