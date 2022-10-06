#include "main.h"

/**
* array_range - creates an array of integers
* @min: smallest number in the array
* @max: lagrest value in the array
*
* Return: pointer to the address of the memory block
*/
int *array_range(int min, int max)
{
	int *a;
	int i, j = 0;

	if (min > max)
		return (NULL);

	a = malloc(sizeof(*a) * ((max - min) + 1));
	if (a != NULL)
	{
		for (i = min; i <= max; i++)
		{
			a[j] = i;
			j++
		}
		return (a);
	}
	else
		return (NULL);
}
