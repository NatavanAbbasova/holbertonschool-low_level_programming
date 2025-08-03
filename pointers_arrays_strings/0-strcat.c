#include "main.h"

/**
 * _strcat - concantenate 2 sstrings
 * @dest: grdrcryi yer
 * @src: goturduyu yer
 * Return: Return
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
