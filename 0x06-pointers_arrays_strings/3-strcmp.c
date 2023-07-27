/**
 * _strcmp - compares 2 strings
 *
 * @s1: pointer to 1st string
 * @s2: pointer to 2nd string
 *
 * Return: 0 if strings are equal
 * 	   <0 if @s1 is less than @s2
 * 	   >0 if @s1 is greater than @s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	/*loop as long as the characters of s1 and s2 are equal*/
	while (s1[i] == s2[i])
	{
		/*if reached of s1 then both are equal*/
		if (s[i] == '\0')
			return 0;
		i++;
	}
	/*return the difference between the 2 characters*/
	return (s1[i] - s2[i]);
}
