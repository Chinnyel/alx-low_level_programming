#include "main.h"
#include <stdio.h>
/**
 * print_n_to_98 - print all natural numbers from n to 98
 * @n: int type
 */
void print_to_98(int n)
{
        if (n > 98)
        {
                while (n >= 98)
                {
                        printf("%d", n);
                        if (n != 98)
                        {
                                printf(", ");
                        }
                        n--;
                }
        }
        else
        {
                while (n <= 98)
                {
                        printf("%d", n);
                        if (n != 98)
                        {
                                printf(", ");
                        }
                        n++;
                }
        }
        printf("\n");
}

