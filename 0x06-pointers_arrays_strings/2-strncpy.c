#include "main.h"
/**
 * _strncpy - copy a string
 *  @dest: string
 *  @src: string
 *  @n: number of chars to copy
 *  Return: 'dest' edited string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c;

	c = 0;
	while (c < n && src[c] != '\0')
	{
		dest[c] = src[c];
			c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
