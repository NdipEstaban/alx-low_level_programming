/**
 * _isupper - check if c is an uppercase letter
 *
 * @c: value to check for
 *
 * Return: 1 if its uppercase
 * 	   0 if not uppercase
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
