#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * print_alphabet - function
 *
 * Return: void
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	return;
}
