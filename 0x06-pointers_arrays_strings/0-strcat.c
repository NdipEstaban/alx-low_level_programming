/**
 * _strcat - concatenates 2 strings
 *
 * @dest: the pointer for the head of the string
 * @src: the pointer for the tail of the string
 *
 * Return: the pointer to the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	/*reach the end of the dest string*/
	while (dest[i] != '\0')
		i++;
	j = 0;
	/*add characters of src string to the end*/
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	/*mark the end of the string with null character*/
	dest[i] = '\0';
	return (dest);
}
