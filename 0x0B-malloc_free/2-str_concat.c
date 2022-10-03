#include "main.h"

/**
* str_concat - a function that concatenates two strings.
*@s1:First string
*@s2:Second string
*
*Return: NULL in case of failure , but pointer to new string in
*case of success
*/

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, concat_index = 0,  len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	s = malloc(sizeof(char) * len);

	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		s[concat_index++] = s1[i];

	for (i = 0; s2[i]; i++)
		s[concat_index++] = s2[i];

	return (s);
}
