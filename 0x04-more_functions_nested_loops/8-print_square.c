#include "main.h"
/**
  * print_square - Prints n squares according n number of times
  * @size: The number of squares/number of times
  *
  * Return: 0 success
  */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
