#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - program that adds two +tve numbers
 * @argc: arg count
 * @argv: arg vector
 * Return: 0, or 1
 */
int main(int argc, char *argv[])
{
	int b = 0, a, c;

	for (a = 1; a < argc; a++)
	{
		for (c = 0; argv[a][c]; c++)
		{
			if (isdigit(argv[a][c]) == 0)
			{
				puts("Erro");
				return (1);
			}
		}
	}
	for (a = 1; a < argc; a++)
	{
		b += atoi(argv[a]);
	}
	printf("%d\n", b);
	return (0);
}
