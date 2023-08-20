#include<stdio.h>
/**
 * malloc_checked - assigns required bytes of memory
 *
 * @b: the quantity of bytes to allocate
 *
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	void *new_mem;

	new_mem = malloc(b);
	if (new_mem == NULL)
		exit(98);
	return (new_mem);
}
