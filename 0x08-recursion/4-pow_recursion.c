#include "main.h"
/**
 * _pow_recursion - function that returns x raised to power y
 * @x: int type
 * @y: int type
 * Return: if y is lower than 0, return negative 1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));

}
