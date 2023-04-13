#include "search_algos.h"

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located, or -1 on failure
 */
int advanced_binary(int *array, size_t size, int value)
{
    size_t left = 0, right = size - 1, mid, i;

    if (!array)
        return (-1);

    while (left <= right)
    {
        printf("Searching in array: ");
        for (i = left; i < right; i++)
            printf("%d, ", array[i]);
        printf("%d\n", array[i]);

        mid = (left + right) / 2;

        if (array[mid] < value)
            left = mid + 1;
        else if (array[mid] > value)
            right = mid - 1;
        else
        {
            if (mid == 0 || array[mid - 1] != value)
                return (mid);
            else
                right = mid;
        }
    }

    return (-1);
}

