#include "main.h"
/**
 * _sqrt_helper - hkdkshkjd
 * @n: men
 * @i: dkuhksdk
 * Return: return
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	return (_sqrt_helper(n, i + 1));
}
/**
 * _sqrt_recursion - shellin formasi + shellin home-i
 * @n: men
 * Return: return
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}
