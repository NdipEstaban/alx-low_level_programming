/**
 * reverse_array - reverses an array of integers
 *
 * @a: pointer to array
 * @n: number of items in array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp;
	int j;
	int i;

	i = 0;
	j = n-1;
	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
