#include <stdio.h>
/**
 * main - Entry point
 * Description: alphABET
 * Return: 0 (success)
 */
int main(void)
{
	int n = 97;
	int c = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (c <= 90)
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
