#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - buney
 * @s: string
 * @accept: aga beee buna c yazaceydim
 * Return: return
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
