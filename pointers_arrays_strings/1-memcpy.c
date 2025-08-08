#include "main.h"

/**
 * _memcpy - memo cp
 * @dest: destination
 * @src: o jdjjdj
 * @n: men
 * Return: return
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
