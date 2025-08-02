#include "main.h"

/**
 * _puts - printf daha normal versiyasi
 * @str: inputdudaaa
 */
void _puts(char *str)
{

	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
