#include "main.h"
/**
 * _isdigit - check if it's digit
 *
 * @c: char ASCII code
 *
 * Return: 1-> digit | 0-> otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
