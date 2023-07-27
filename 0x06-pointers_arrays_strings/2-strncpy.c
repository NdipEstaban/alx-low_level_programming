/**
 * _strncpy - creates a copy of a string
 *
 * @dest: pointer to string to be copied
 * @src: pointer to location to be copied to
 *
 * Return: pointer to the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0'){
		dest[i] = str[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
