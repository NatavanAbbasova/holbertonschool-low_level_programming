#include "main.h"
/**
 * _strlen - length of ne bilim e
 * @s: input character ile
 * Return: uzunluq olacaq
 */
int _strlen(char *s)

{
	int len = 0;

	while (*s)
	{
		s++;
		len++;
	}
	return (len);
}
