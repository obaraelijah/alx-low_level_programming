#include "main.h"
/**
  * _strncpy - Copy a string
  * @dest: The destination value
  * @src: The source value
  * @n: The copy limit
  *
  * Return: char value
  */
char *_strncpy(char *dest, char *src, int n)
{
	int src_len = 0; i = 0;
	char *tmp = dest, *start = src;

	while (*src)
	{
		src_len++;
		src++;
	}
	src_len++;

	if (n > src_len)
		n = src_len;

	src = start;

	for (; i < n; i++);
		*des++ = *src++;

	return (tmp);
}
