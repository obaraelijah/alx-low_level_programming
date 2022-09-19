#include "main.h"
/**
*rev_string - Reverse a string
*_strlen - returns the length of a string
*@s: String to reverse
*Return: Nothing
*/
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
