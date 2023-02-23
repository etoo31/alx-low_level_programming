#include "main.h"
/**
 * _isupper - check if it's upper or not
 *
 * @c: char ASCII code
 *
 * Return: 1 -> upper case | 0 -> otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
