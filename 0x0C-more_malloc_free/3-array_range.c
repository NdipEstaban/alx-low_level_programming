#include<stdlib.h>
/**
 * array_range - creates an array of integers
 *
 * @min: minimum item to include in the array
 * @max: maximum item to include in the array
 *
 * Return: pointer integer to the array
 * 	   NULL if @min > @max
 * 	   NULL if memory allocation fails
 */
int *array_range(int min, int max)
{
	unsigned int i;
	int *array;

	if (min > max)
		return (NULL);
	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);
	for ( i = 0; min <= max; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
