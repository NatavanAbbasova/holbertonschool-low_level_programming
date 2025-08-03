#include "main.h"

/**
 * _strncat - cde funksiyadir src faylindan setirleri
 * dest setrinin sonuna n sayda simvol kecirir
 * @dest: netice yazilacaq string
 * @src: menbe string
 * @n: n sayda simvol
 *
 * Return: destinationa return olsun
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i])
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
