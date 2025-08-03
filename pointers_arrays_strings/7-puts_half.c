#include "main.h"

/**
 * puts_half - yeni ki put yarisini
 * @str: inputttt
 *
 * Description: tek ededler ucun narahat olmayin. 1 cixacaq
 */
void puts_half(char *str)
{
	int i = 0;
	int len = 0;
	int second_half;

	while (str[len])
		len++;

	if (len % 2 == 0)
		second_half = len / 2;
	else
		second_half = (len + 1) / 2;

	for (i = second_half; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
