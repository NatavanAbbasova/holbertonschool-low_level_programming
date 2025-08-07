#include "main.h"
/**
 * _islower - yoclayir ki if lowercase or not
 *@c: herf
 * /
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
