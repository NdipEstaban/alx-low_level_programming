/**
 * int_index - searches for an integer
 * @array: Array of intergers to search in
 * @size: number of elements in array
 * @cmp: callback function to compare with
 *
 * Return: -1 if no element is found
 * 	   the index of the found element in the array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	for (index = 0; index < size; index++)
	{
		if(cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
