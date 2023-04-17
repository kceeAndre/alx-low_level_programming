#include "main.h"
/**
 * _pow_recursion - major value added
 * @y: insert value
 * @x: insert value
 * Return: return value as 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
