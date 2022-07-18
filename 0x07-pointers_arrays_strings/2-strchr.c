#include "main.h"

/**
 * _strchr - locates a char in a string
 * @s: string to be searched
 * @c: char to be checked
 * Return: pointer to the first occurence of c in s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
