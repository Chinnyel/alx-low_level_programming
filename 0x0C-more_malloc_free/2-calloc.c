#include <stdlib.h>
#include "main.h"
/**
 * _calloc - a function that allocates mem for an array
 * @size: no of mem to be allocated
 * @nmemb: no of elements
 * Return: if nmemb is 0. size is 0 and calloc = NULL
 * if malloc fails and pointer to allocated mem.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	filler = mem;

	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';

	return (mem);
}
