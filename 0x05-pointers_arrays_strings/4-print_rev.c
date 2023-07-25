#include"main.h"
/**
 * print_rev - reverses and prints a string
 *
 * @s: pointer to string parameter
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int ind;

	/*counts all the non-null string characters*/
	for (ind = 0; s[ind] != '\0'; ind++)
		;
	/*prints character starting from the last*/
	for(--ind; ind >= 0; --ind)
		_putchar(s[ind]);
	_putchar('\n');
}
