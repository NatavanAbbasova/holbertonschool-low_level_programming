#include <stdio.h>
#include "main.h"
/**
 * print_array - yeni arrayin elementlerini print brooo
 * @a: integerin memory adresi.arrayin pointeri
 * @n: elementlerin sayi arraydeki
 * bunu sonuncu elementde vergul olmasin deye n-1 edeceyik
 *
 * Description: niye des yoxdukiii
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
