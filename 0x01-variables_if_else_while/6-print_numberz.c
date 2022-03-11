#include <stdio.h>

/**
 * main - prints all single ditit numbers beginning from 0
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n  = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
