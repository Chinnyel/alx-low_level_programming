#include "main.h"

/**
 * _isalpha - funtion that checks for alphabetic character
 * @c: the character
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
