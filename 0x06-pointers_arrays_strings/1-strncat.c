/**
 * _strncat - concatenates 2 strings
 *
 * @dest: pointer to head of the string
 * @src: pointer to tail of the string
 * @n: the maximum number of bytes from @src to use
 *
 * Return: pointer to the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i,j;

	i = 0;
	while(dest[i] != '\0')
		i++;
	j = 0;
	while(j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
