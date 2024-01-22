#include "sort.h"

/**
 * getMax - Find the maximum value in an integer array.
 * @arr: The integer array.
 * @n: The size of the array.
 *
 * Return: The maximum value in the array.
 */
int getMax(int *arr, int n)
{
	int max_val, i;

	for (max_val = arr[0], i = 1; i < n; i++)
	{
		if (arr[i] > max_val)
			max_val = arr[i];
	}

	return (max_val);
}

/**
 * countingSort - Perform counting sort on an integer array.
 * @arr: The integer array to be sorted.
 * @size: The size of the array.
 *
 * Description: Prints the counting array after setup.
 */
void countingSort(int *arr, size_t size)
{
	int *count, *sorted, max_val, i;

	if (arr == NULL || size < 2)
		return;

	sorted = malloc(sizeof(int) * size);
	if (sorted == NULL)
		return;

	max_val = getMax(arr, size);
	count = malloc(sizeof(int) * (max_val + 1));

	if (count == NULL)
	{
		free(sorted);
		return;
	}

	for (i = 0; i < (max_val + 1); i++)
		count[i] = 0;

	for (i = 0; i < (int)size; i++)
		count[arr[i]] += 1;

	for (i = 0; i < (max_val + 1); i++)
		count[i] += count[i - 1];

	print_array(count, max_val + 1);

	for (i = 0; i < (int)size; i++)
	{
		sorted[count[arr[i]] - 1] = arr[i];
		count[arr[i]] -= 1;
	}

	for (i = 0; i < (int)size; i++)
		arr[i] = sorted[i];

	free(sorted);
	free(count);
}

