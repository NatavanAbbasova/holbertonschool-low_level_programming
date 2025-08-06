#include "main.h"
/**
 * _memset - verilmis yaddas sahesini mueyyen baytla doldurur
 * @s: deyisdirilecen yaddas sahesine isaret eden pointer
 * @b: yazilacaq bayt deyeri
 * @n: nece baytin deyisdirileceyi
 *
 * Return: return answer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
