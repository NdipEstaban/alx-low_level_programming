#include<stdio.h>
/**
 * main - entry point of program
 * Return: 0
*/
int main(void)
{
	int ch;

	ch = 0;
	while (ch <= 9)
	{
		putchar(ch + '0');
		ch++;
	}
	putchar('\n');
	return (0);
}
