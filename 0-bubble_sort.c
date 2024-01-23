#include "sort.h"

/**
 * replace - replaces 2 values
 *
 * @m: the first value
 * @n: the second value
 */
void _swap(int *m, int *n)
{
    int temp = *m;
    *m = *n;
    *n = temp;
}

/**
 * bubble_sort - the first sorting algorithm
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */

void bubble_sort(int *array, size_t size)
{
    size_t i, j;

    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                _swap(&array[j], &array[j + 1]);
                print_array(array, size);
            }
        }
    }
}
