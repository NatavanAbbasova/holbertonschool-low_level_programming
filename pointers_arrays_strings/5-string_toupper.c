#include "main.h"

/**
 * string_toupper - eyni str amma boyuk herlerle
 * @s: str idi kodun ozunde burada s olub
 *
 * Return: return string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}

	return (s);
}
