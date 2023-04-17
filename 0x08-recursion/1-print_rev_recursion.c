#include "main.h"
/**
 * _print_rev_recursion - make input here
 * @s: place input at this point
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
