#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - a function that allocates memory
 * @b: int type to be allocated
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
        void *mem = malloc(b);

        if (mem == NULL)
                exit(98);
        return (mem);
}
