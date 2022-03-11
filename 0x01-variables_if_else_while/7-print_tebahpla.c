#include <stdio.h>

/**
 * main - prints all lowercase alphabet in reverse
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
