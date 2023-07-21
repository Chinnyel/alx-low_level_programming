#include "main.h"
/**
 * isdigit - a function that checks for a digit
 * @c: int type
 * Return: 1 if c is a digit else 0
 */
int _isdigit(int c)
{
        if (c > 47 && c < 58)

                return (1);

        return (0);
}

