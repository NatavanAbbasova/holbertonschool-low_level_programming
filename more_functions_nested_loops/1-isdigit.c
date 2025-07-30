#include "main.h"
/**
 * _isdigit imput for function
 * @c variables
 * Return 0 if c is a digit, else 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
