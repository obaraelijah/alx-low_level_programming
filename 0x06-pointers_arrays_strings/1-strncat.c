#include "main.h"
/**
  * _strncat - Concatenates two strings
  * @dest: The destination value
  * @src: The source value
  * @n: The limit of the concatenation
  *
  * Return: A pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0; dlen = 0;

	while (dest[index++])
		dlen++;

	for (index = 0; src[index] && index < n; index++)
		dest[dlen++] = src[index];

	return (dest);
}
