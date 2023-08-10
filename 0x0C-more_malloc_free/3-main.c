#include <stdlib.h>
#include "main.h"
/**
 * array_range - function that creates an array of integers
 * @min: array values should be taken from
 * @max: array value should be taken into
 * Return: the pointer to newly created array
 * if min is greater than max return NULL, if malloc fails
 * return NULL
 */
int *array_range(int min, int max)
{
        int *array, index, size;

        if (min > max)
                return (NULL);

        size = max - min + 1;

        array = malloc(sizeof(int) * size);

        if (array == NULL)
                return (NULL);

        for (index = 0; index < size; index++)
                array[index] = min++;

        return (array);
}
