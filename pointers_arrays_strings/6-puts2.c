#include "main.h"
/**
 * puts2 - bunlarikitabxanadan goturmek mumkun deyil?!
 * @str: inputdudaaa
 *
 * Description: yeni ki cut sirda duran herfleri
 * put ele
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
