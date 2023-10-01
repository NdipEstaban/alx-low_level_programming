/**
 * factorial - a function that finds the factorial of *n
 *
 * @n: positive number
 *
 * Return: factorial of @n
*/
int factorial(int n)
{
	if (n < 0)
		return (0);
	if (n < 1)
		return (1);
	return (n * factorial(n - 1));
}
