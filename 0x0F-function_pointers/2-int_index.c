#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: pointer array
 * @cmp:compares the value
 * @size: no of elements in the array
 * Return: 0 if element matches and -1 if size is <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
