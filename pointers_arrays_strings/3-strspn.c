#include "main.h"
/**
 * _strspn - aaaa bunun cetin versiyasi
 * pld-de dusmusdu
 * @s: 7
 * @accept: c yazaceydim yene
 * Return: returndideee
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *a;

	while (*s != '\0')
	{
		a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				count++;
				break;
			}
			a++;
		}

		if (*a == '\0')
			break;

		s++;
	}

	return (count);
}
