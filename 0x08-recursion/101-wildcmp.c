#include "main.h"
/**
 * wildcmp - A function that compares two strings
 * @s1: First input parameter
 * @s2: Second input parameter
 * Return: 1 if strings identical and 0 in otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s + 1, s2 + 1);
}
