#include "main.h"
void rev_string(char *s)
{
	int len = 0, i = 0;
	char swp;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		swp = s[i];
		s[i++] = s[len];
		s[len] = swp;
	}
}
