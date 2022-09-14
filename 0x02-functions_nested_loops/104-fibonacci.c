#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 *        1 and 2, separated by a comma followed by a space.
 *
 * Return: 0(success).
 */
int main(void)
{
	unsigned long int x = 0, y = 1, s;
	int i;

	for (i = 1; i <= 98; i++)
	{
		s = x + y;

		if (i != 98)
		{
			printf("%lu, ", s);
		}
		else
		{
			printf("%lu, ", s);
		}
		x = y;
		y = s;
	}
	return (0);
}
