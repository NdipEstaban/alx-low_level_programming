#include<stdio.h>
/**
 *main - entry point of program
 *Return: 0
*/
int main(void)
{
	char ch;

	ch = 'z';
	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
