#include "sort.h"

/**
 * find_max - Find the maximum value in an array of integers.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Return: The maximum integer in the array.
 */
int find_max(int *array, int size)
{
	int max_val, i;

	for (max_val = array[0], i = 1; i < size; i++)
	{
		if (array[i] > max_val)
			max_val = array[i];
	}

	return (max_val);
}

/**
 * counting_sort_radix - Perform counting sort on the significant digits
 *                       of an array of integers.
 * @array: An array of integers.
 * @size: The size of the array.
 * @sig: The significant digit to sort on.
 * @buffer: A buffer to store the sorted array.
 */
void counting_sort_radix(int *array, size_t size, int sig, int *buffer)
{
	int count[10] = {0}, i;

	for (i = 0; i < size; i++)
		count[(array[i] / sig) % 10]++;

	for (i = 1; i < 10; i++)
		count[i] += count[i - 1];

	for (i = size - 1; (int)i >= 0; i--)
	{
		buffer[count[(array[i] / sig) % 10] - 1] = array[i];
		count[(array[i] / sig) % 10]--;
	}

	for (i = 0; i < size; i++)
		array[i] = buffer[i];
}

/**
 * radix_sort - Sort an array of integers in ascending order
 *              using the LSD radix sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Implements the Least Significant Digit (LSD) radix sort algorithm.
 * Prints the array after each significant digit iteration.
 */
void radix_sort(int *array, size_t size)
{
	int max_value, sig_digit, *temp_buffer;

	if (array == NULL || size < 2)
		return;

	temp_buffer = malloc(sizeof(int) * size);
	if (temp_buffer == NULL)
		return;

	max_value = find_max(array, size);

	for (sig_digit = 1; max_value / sig_digit > 0; sig_digit *= 10)
	{
		counting_sort_radix(array, size, sig_digit, temp_buffer);
		print_array(array, size);
	}

	free(temp_buffer);
}
