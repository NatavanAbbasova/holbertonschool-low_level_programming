#include "main.h"
#include <math.h>
/**
 * _pow_recursion - fdskjkl
 * @x: x-men hahahah
 * @y: sjsjsjj
 * Return: return
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
