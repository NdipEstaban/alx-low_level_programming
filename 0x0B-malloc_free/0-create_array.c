#include <stdlib.h>
/**
 * create_array - creates an array of chars and initializes
 *                it with a specific char.
 *
 * @size: array of size
 * @c: char to initialize array with
 *
 * Return: array @array
*/
char *create_array(unsigned int size, char c)
{
	int i;
	char *array;

	if (size == 0)
		return NULL;
	array = malloc(size * sizeof(char));
	if (array == NULL)
		return NULL;
	for (i=0; i < size; i++)
		array[i] = c;

	return array;
}
