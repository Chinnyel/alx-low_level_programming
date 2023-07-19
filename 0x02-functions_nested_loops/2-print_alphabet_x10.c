#include "main.h"
/**
 * prints_alphabet - prints the alphabeth in lowercase 10 times
 * Return - 0
 */
void print_alphabet_x10(void);
{
	int i = 0;
	char c;

	while (i < 10)
	{
		c = 97;
		while (c <= 122)
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
