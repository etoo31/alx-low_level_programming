#include <unistd.h>
#include "main.h"
/**
 * main - Entry point
 *print call put char function
 * Return: Always 0 (Success)
 */
int main(void)
{
	_putchar();
	return (0);
}
/**
 * _putchar - callable function
 *print _putchar followed by new line
 * Return: Always 0 (Success)
 */
void _putchar(void)
{
	write(STDERR_FILENO, "_putchar\n", 9);
}
