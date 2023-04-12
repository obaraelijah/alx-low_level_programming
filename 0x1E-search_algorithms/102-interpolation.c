#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array using
 *                         interpolation search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located, or -1 if value is not present
 *         or array is NULL.
 */
int interpolation_search(int *array, size_t size, int value)
{
    size_t low = 0, high = size - 1, pos;
    double fraction;

    if (!array)
        return (-1);

    while (low <= high && value >= array[low] && value <= array[high])
    {
        fraction = (double)(value - array[low]) / (double)(array[high] - array[low]);
        pos = low + (fraction * (high - low));

        printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

        if (array[pos] == value)
            return (pos);

        if (array[pos] < value)
            low = pos + 1;
        else
            high = pos - 1;
    }

    if (low <= high && value < array[low])
        printf("Value checked array[%lu] is out of range\n", low);

    if (low <= high && value > array[high])
        printf("Value checked array[%lu] is out of range\n", high);

    return (-1);
}

