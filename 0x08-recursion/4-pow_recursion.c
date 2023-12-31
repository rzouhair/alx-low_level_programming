#include "main.h"

/**
 * _pow_recursion - This function returns the value of 'x' raised to the power of 'y'.
 * @x: The base value to raise.
 * @y: The power to which 'x' is raised.
 *
 * Return: The result of 'x' raised to the power of 'y'.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
