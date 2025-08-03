#include "main.h"
/**
 * _strncpy - bayaqkinin eynisi amma bu cpoy edir
 * @dest: getdiyi destination
 * @src: movcud oldugu source
 * @n: kececek stringlerin sayi
 *Return: return to desti
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
