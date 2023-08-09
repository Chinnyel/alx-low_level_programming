#include <stdlib.h>
#include "main.h"
/**
 * create_array - a function that creates an array of chars and
 * initializes it with a specific char.
 * @size: size of array
 * @c: the specific char
 * Return: if size is 0 and null is function fails.
 * else - a pointer to array
 */
char *create_array(unsigned int size, char c)
{
        char *array;
        unsigned int index;

        if (size == 0)
                return (NULL);
        array = malloc(sizeof(char) * size);
        if (array == NULL)
                return (NULL);
        for (index = 0; index < size; index++)
                array[index] = c;
        return (array);
}
