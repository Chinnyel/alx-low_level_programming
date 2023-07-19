#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character
 * @c: type int char
 * Return: 1 if a letter, lowercase or uppercase, and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
