#include "search_algos.h"

int binary_search_recursive(int *array, size_t lower, size_t upper, int value);
void print_array(int *array, int lower, int upper);

/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index of value in array or -1 if NULL
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);
	return (binary_search_recursive(array, 0, size - 1, value));
}

/**
 * binary_search_recursive - searches for a value in a sorted array of
 * integers using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @lower: lower boundary of the array
 * @upper: upper boundary of the array
 * @value: value to search for
 *
 * Return: index of value in array or -1 if NULL
 */
int binary_search_recursive(int *array, size_t lower, size_t upper, int value)
{
	if (upper >= lower)
	{
		size_t mid = lower + (upper - lower) / 2;

		print_array(array, lower, upper);
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			return (binary_search_recursive(array, lower, mid - 1, value));
		return (binary_search_recursive(array, mid + 1, upper, value));
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
