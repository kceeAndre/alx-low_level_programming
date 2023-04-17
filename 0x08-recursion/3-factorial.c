#include "main.h"
/**
 * factorial - put in details
 * @n: values added
 * Return: this will return 0
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
