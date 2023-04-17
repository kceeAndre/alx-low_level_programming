#include "main.h"
/**
 * prime_a - new value
 * @s: an entry
 * @d: entry
 * Return: return 0
 */
int prime_a(int s, int d)
{
	if (s <= 1 || (s != d && s % d == 0))
	{
		return (0);
	}
	else if (s == d)
	{
		return (1);
	}
	return (prime_a(s, d + 1));
}

/**
 * is_prime_number - new value
 * @n: an entry
 * Return: return 0
 */
int is_prime_number(int n)
{
	return (prime_a(n, 2));
}
