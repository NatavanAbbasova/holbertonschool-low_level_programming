#include "main.h"
/**
 * _strcpy - 0 null daxil copy
 * @dest: kopyalanacagi yer
 * @src: input deyesen
 *
 * Return: Pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = 0;
	return (dest);
}
