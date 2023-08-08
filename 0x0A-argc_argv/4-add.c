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
	int a = 0, i, c;

	for (i = 1; i < argc; i++)
	{
		for (c = 0; argv[i][c]; c++)
		{
			if (isdigit(argv[i][c]) == 0)
			{
				puts("Erro");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		a += atoi(argv[i]);
	}

	printf("%d\n", a);
	return (0);
}
