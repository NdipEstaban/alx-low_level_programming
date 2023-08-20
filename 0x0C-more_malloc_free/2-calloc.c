#include<stdlib.h>
/**
 * _calloc - allocates memeory for an array
 *
 * @nmemb: size of array
 * @size: size of an item
 *
 * Return: pointer to allocated memory
 * 	   NULL if memory allocation fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for(i = 0; i < nmemb * size; i++)
		p[i] = 0;

	return (p);
}
