#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

/**
 * print_array - Print the elements of an array.
 * @array: The array to print.
 * @size: The size of the array.
 */
void print_array(const int *array, size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

/**
 * bubble_sort - Sort an array of integers in ascending order using Bubble Sort.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
    size_t i, len = size;
    bool bubbly = false;

    // Check if the array is NULL or has less than 2 elements
    if (array == NULL || size < 2)
        return;

    // Continue the loop until no more swaps are needed
    while (!bubbly)
    {
        bubbly = true;

        // Iterate through the array and swap adjacent elements if needed
        for (i = 0; i < len - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                // Swap elements and print the array
                swap_ints(&array[i], &array[i + 1]);
                print_array(array, size);
                bubbly = false;
            }
        }

        // Decrease the length of the array to exclude the last sorted element
        len--;
    }
}

