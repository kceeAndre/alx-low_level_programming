#include "main.h"
/**
 * long_1 - value added
 * @a: added
 * Return: return 0
 */

int long_1(char *a)
{
	if (*a != '\0')
	{
		return (1 + long_1(s + 1));
	}
	return (0);

}
/**
 * compare - entry
 * @a: enter
 * @b: enter
 * Return: 0
 */
int compare(char *a, int b)
{
	if (b <= 0)
	{
		return (1);
	}
	if (*a == *(a + (b - 1)))
	{
		return (compare(a + 1, b - 2));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - Main Entry
 * @s: input
 * Return: 0
 */
int is_palindrome(char *s)
{
	int l;

	l = long_1(s);
	return (compare(s, l));
}
