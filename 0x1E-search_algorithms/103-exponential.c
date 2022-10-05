#include "search_algos.h"

int binary_search_exp(int *array, size_t low, size_t high, int value);
void print_array(int *array, int lower, int upper);
int min(int a, int b);

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 *
 * @array:  pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value:  value to search for
 *
 * Return: first index of value or -1 if NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, j = 0;

	if (array && size)
	{
		if (array[0] == value)
			return (0);
		i = 1;
		while (i < size && array[i] <= value)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			j = i;
			i *= 2;
		}
		if (size <= i)
			i = size - 1;
		printf("Value found between indexes [%lu] and [%lu]\n", j, i);
		i += 1;
		return (binary_search_exp(array, i / 2, min(i, size - 1), value));
	}
	return (-1);
}

/**
 * binary_search_exp - searches for a value in a sorted array using binary
 * search algorithm
 *
 * @array:  pointer to the first element of the array to search in
 * @low: lower boundary of array
 * @high: upper boundary of array
 * @value:  value to search for
 *
 * Return: first index of value or -1 if NULL
 */
int binary_search_exp(int *array, size_t low, size_t high, int value)
{
	if (high >= low)
	{
		size_t mid = low + (high - low) / 2;

		print_array(array, low, high);
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			return (binary_search_exp(array, low, mid - 1, value));
		return (binary_search_exp(array, mid + 1, high, value));
	}
	return (-1);
}

/**
 * print_array - prints an array
 * @array: array to print
 * @lower: lower boundary of array
 * @upper: upper boundary of array
 * Return: void
 */
void print_array(int *array, int lower, int upper)
{
	int i;

	printf("Searching in array: ");
	for (i = lower; i < upper; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[upper]);
}

/**
 * min - finds the minimum value between two arguments supplied
 *
 * @a: first valu
 * @b: second value
 *
 * Return: minimum value
 */
int min(int a, int b)
{
	if (b > a)
		return (a);
	return (b);
}
