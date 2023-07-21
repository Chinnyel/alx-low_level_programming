#include "main.h"
/**
 * _isupper - functio that checks for uppercase character
 * @c: int type
 * Return: return 1 if c is uppercase and 0 if otherwise
 */
int _isupper(int c)
{

	if (c > 64 && c < 91)

		return (1);

	return (0);
}
