#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c = 'a';
	char u = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (u <= 'Z')
	{
		putchar(u);
		u++;
	}
	putchar('\n');
	return (0);
}
