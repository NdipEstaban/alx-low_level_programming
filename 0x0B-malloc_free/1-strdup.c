#include<stdlib.h>
/*
 * _strdup - returns a pointer to a duplicate string of @str
 *
 * @str: string to duplicate
 *
 * Return: NULL if str == NULL
 * 	   @str
*/
char *_strdup(char *str)
{
	int i;
	int l;
	char *s;

	if (str == NULL)
		return (NULL);
	l = 0;
	while (str[l] !== '\0')
		l++;
	s = malloc((l+1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}
