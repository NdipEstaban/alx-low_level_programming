#include<stdlib.h>
/**
 * string_nconocat - function that concatenates two strings
 *
 * @s1: 1st string
 * @s2: 2nd string
 * @n: characters of  @s2 to concatenate
 *
 * Return: new string made of @s1 and @n characters of @s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int new_str_len;
	int l1;
	int l2;
	char *new_str;

	l1 = 0;
	l2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;
	new_str = (char *) malloc((l1 + n + 1) * sizeof(char));
	new_str_len = l1 + n;
	for (l1 = 0; l1 <= new_str_len && s1[l1] != '\0'; l1++)
		new_str[l1] = s1[l1];
	for (l2 = 0 ; l1 <= new_str_len && s2[l2] != '\0'; l2++)
	{
		new_str[l1] = s2[l2];
		l1++;
	}
	new_str[l1] = '\0';
	return (new_str);
}
