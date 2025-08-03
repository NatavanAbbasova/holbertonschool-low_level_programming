#include "main.h"

/**
 * reverse_array - reverse
 * @a: tersine cevrilecek integer massivi
 * @n: massivin uzunlugu
 *
 * Return: return
 */

void reverse_array(int *a, int n)
{
	int *start = a;
	int *end = a + n - 1;
	int i;

	while (start < end)
	{
		i = *start;
		*start = *end;
		*end = i;

		start++;
		end--;
	}
}
