#include "main.h"
/**
 * _isupper - functio that checks for uppercase character
 * @c: int type
 * Return: return 1 if c is uppercase and 0 if otherwise
 */
int _isupper(int c)
{
	c = 0;
	int i = 0;

	while (c < 97 && c <= 122)
		c++;
	{
		_putchar(c);

		return (0);
	}
	while (i < 65 && i <= 90)
		i++;
	{
		_putchar(i);
	}
	_putchar('\n');
	return (1);
}
