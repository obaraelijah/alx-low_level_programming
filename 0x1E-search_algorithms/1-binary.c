#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using the Binary s algo
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array
 * @value: value to search for in array
 * Return: the index where value is located else -1
 */
int binary_search(int *array, size_t size, int value)
{
        size_t left = 0;
        size_t right = size - 1;
        size_t i;

        while (left <= right)
        {
                size_t mid = (left + right) / 2;

                printf("Searching in array: ");
                for (i = left; i < right; i++)
                        printf("%d,", array[i]);
                printf("%d\n", array[right]);

                if (array[mid] == value)
                        return (mid);

                else if (array[mid] > value)
                        right = mid - 1;

                else
                        left = mid + 1;
        }

        return -1;
}

