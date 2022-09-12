#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *@r: An integer input
 * Return: Always 0.
 */
int print_last_digit(int r)
{
	r = r % 10;

	if (r < 0)
		r = -r;
		_putchar(r + '0');
		return (r);
}
