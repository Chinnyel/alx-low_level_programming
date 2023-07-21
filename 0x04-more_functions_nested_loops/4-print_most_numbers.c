#include "main.h"
/**
 * print_most_numbers - function that prints numbers from 0 to 9 without 2 & 4
 * Return:
 */
void print_most_numbers(void)
{
	int i = 48;

	while (i < 58)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
	}
}
