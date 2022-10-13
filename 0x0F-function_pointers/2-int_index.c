#include "function_pointers.h"

/**
*int_index - searches for an integer
*@array: Array containing elements
*@size: number of elements in array
*@cmp: function which compare values
*
*Return: returns -1 if no element match
* or when size is less than zero
*return pointer to the first corresponding element
*
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL || array == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (; i < size; i++)
		if (cmp(array[i]))
			return (i);

	if (i == size)
		return (-1);

	return (-1);
}
