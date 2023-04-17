#include "main.h"
/**
 * sqrt_a - values needed
 * @s: add value
 * @d: add value
 * Return: this will return 0
 */
int sqrt_a(int s, int d)
{
	if (d * d == s)
	{
		return (d);
	}
	else if (d * d > s)
	{
		return (-1);
	}
	return (sqrt_a(s, d + 1));
}

/**
 * _sqrt_recursion - value addeed
 * @n: n is anew input
 * Return: this will return 0
 */
int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
