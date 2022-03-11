#include <stdio.h>

/**
 * main - prints all single ditit numbers beginning from 0
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
