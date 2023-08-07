#include "main.h"

/**
 * _strcat - concatenates only 2 strings
 * @dest: string meant to append 
 * @src: a string to add
 * Return: pointer to resulting string
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
