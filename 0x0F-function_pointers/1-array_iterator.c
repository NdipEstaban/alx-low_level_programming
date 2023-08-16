#include<stddef.h>
/**
 * array_iterator - executes a function on each element in array
 *
 * @array: pointer to array
 * @size: size of array
 * @action: function to execute on each element
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		while (size -- > 0)
		{
			action(array[size]);
		}
	}
}
