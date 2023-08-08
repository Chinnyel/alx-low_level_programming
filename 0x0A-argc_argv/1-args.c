#include <stdio.h>
#include "main.h"
/**
 * main - program that print no of arg passed into it
 * @argv: argument vector
 * @argc: argument count
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
