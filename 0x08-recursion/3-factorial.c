#include "main.h"
/**
 * factorial - factorial number
 * @n: evaluated number
 * Return: factorial of n, if n < 0 return -1
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
