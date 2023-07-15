#include <stdio.h>
/**
 * main - entry point of program
 * Return:0
*/
int main(void)
{
	int i = 0;
	char ch;

	while (i <= 15) {
		ch = i + '0';
		if (ch > '9') {
			ch = ch + 'a' - '0' - 10;
		}
		putchar(ch);
		i++;
	}
	putchar('\n');
	return (0);
}
