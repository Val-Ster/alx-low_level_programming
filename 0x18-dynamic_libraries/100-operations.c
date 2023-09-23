#include "main.h"

int add(int a, int b)
{
	return (a + b);
}

int sub(int a, int b)
{
	return (a - b);
}

int mul(int a, int b)
{
	return (a * b);
}

int divide(int a, int b)
{
	if (b == 0)
	{
		/*you can choose to Handle division by zero error.*/
		return (-1); /*Here, we'll return -1 to indicate the error.*/
	}
	return (a / b);
}

int mod(int a, int b)
{
	if (b == 0)
	{
		/*you can choose to Handle modulus by zero error.*/
		return (-1); /*Here, we'll return -1 to indicate the error.*/
	}
	return (a % b);
}

