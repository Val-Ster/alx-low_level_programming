#include <stdio.h>

/**
 * add - adds two integers
 * @a: the first integer operand
 * @b: the second integer operand
 *
 * Return: The result of the addition operation
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtracts two integers
 * @a: the first integer operand
 * @b: the second integer operand
 *
 * Return: The result of the subtraction operation
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiplies two integers
 * @a: the first integer operand
 * @b: the second integer operand
 *
 * Return: The result of the multiplication operation
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * division - divides two integers
 * @a: the first integer operand
 * @b: the second integer operand
 *
 * Return: The result of the division operation
 */
int division(int a, int b)
{
	if (b != 0)
		return (a / b);
	fprintf(stderr, "%d / %d: Division by zero\n", a, b);
	return (0);
}

/**
 * mod - finds the remainder of  two integers after division
 * @a: the first integer operand
 * @b: the second integer operand
 *
 * Return: The result of the modulus operation
 */

int mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	else
		return (0); /*i can use this method, or the one i used for div*/
}
