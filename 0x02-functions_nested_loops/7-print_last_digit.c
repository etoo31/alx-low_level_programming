#include "main.h"
/**
 * print_last_digit - print thre last digit of the integer
 *
 * @n: integer value
 *
 * Return: the last digit of the integer
 */
int print_last_digit(int n)
{
	_putchar((n % 10) + '0');
	return (n % 10);
}
