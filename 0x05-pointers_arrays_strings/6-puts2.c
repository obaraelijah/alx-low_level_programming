#include "main.h"

/**
 * puts2 - print one char out of 2 of a string
 * @str: string to print
**/
void puts2(char *str)
{
	int len = 0, i = 0;

	while (str[len] != '\0')
		len++;

	len -= 1;

	for (; i <= len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
