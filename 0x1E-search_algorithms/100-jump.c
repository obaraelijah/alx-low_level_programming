#include <math.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using the Jump search algorithm
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located, or -1 if value is not present or array is NULL.
 */

int jump_search(int *array, size_t size, int value)
{
    size_t step = sqrt(size);
    size_t left = 0, right = step;
    size_t i;

    if (!array)
        return (-1);

    while (right < size && array[right] < value){
        printf("Value checked array[%lu] = [%d]\n", right, array[right]);
        left = right;
        right += step;
    }
    printf("Value found between indexes [%lu] and [%lu]\n", left, right);

    for (i = left; i <= right && i < size; i++) {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value) {
            return i;
        }
    }

    return -1;
}

