#include "main.h"
#include <stddef.h>
/**
 * _strchr -  *s == c
 * @s: str
 * @c: char
 *
 * Return: return
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (c == '\0')
		return (s);

	return (NULL);
}
