#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: to be printed
 * @f: pointer to function dat prints name.
 */
void print_name(char *name, void (*f)(char *))
{
        if (name == NULL || f == NULL)
                return;
        f(name);
}