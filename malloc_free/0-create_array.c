#include "main.h"
#include <stdlib.h>
/**
 * create_array - array yaradir. umimiyyeyle
 * bu onun ucundur ki yaddasda dinamic yaddas yazaradir
 * @size: size of the array
 * @c: ksjskhdkj
 * Return: return
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
