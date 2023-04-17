#include "main.h"
/**
 * _strlen_recursion - major insertion here
 * @s: values added
 * Return: this will return 0
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
