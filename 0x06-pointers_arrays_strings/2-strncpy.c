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
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != 0; i++)
dest[i] = src[i];

for ( ; i < n; i++)
dest[i] = 0;

return (dest);
}
