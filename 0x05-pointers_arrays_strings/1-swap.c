/**
 * swap_int - swaps the value of two intergers
 *
 * @a: 1st integer
 * @b: second integer
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
