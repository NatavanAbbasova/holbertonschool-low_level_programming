#include "main.h"
#include <stdlib.h>
/**
 * my_length - bu tapsirigi yaxsi tuta bilmedim
 * ona gore de gedirem sonra yazaram saat 05:00
 * @s: sssssssss
 * Return: returndideee
 */
unsigned int my_length(char *s)
{
	unsigned int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * _strdup - woman ideasiz = bird qithout wing
 * bu tasklarin zor adlari var e
 * @str: strindideee
 * Return: malloc ile calloc arasindaki ferq odur kii
 * asagida vurma isaresi yerine vergul qoyursan
 * ozu tutur sohbeti
 */
char *_strdup(char *str)
{
	char *cpy;
	unsigned int i;
	unsigned int len;

	if (str == NULL)
		return (NULL);

	len = my_length(str) + 1;

	cpy = malloc(len * sizeof(char));
	if (cpy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		cpy[i] = str[i];

	return (cpy);
}
