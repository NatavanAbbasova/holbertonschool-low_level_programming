#include "main.h"
/**
 * _is_prime_helper - megatron yani
 * @n: men
 * @divisor: aaaaaaaaaaaaaaa
 * Return: return
 */
int _is_prime_helper(int n, int divisor)
{
	if (divisor * divisor > n)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (_is_prime_helper(n, divisor + 1));
}
/**
 * is_prime_number - optimus yani
 * @n: men
 *
 * Return: optimus
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_is_prime_helper(n, 2));
}
