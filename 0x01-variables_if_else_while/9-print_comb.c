#include<stdio.h>
/**
 * main - entry point of program
 * Return:0
*/
int main(void)
{
	int i, j;

       	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i < j)
			{
				putchar(i + '0');
				putchar(',');
				putchar(' ');
				putchar(j + '0');
			}
		}
	}
	putchar('\n');
	return (0);
}