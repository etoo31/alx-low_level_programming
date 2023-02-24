#include "main.h"
#include "7-print_diagonal.c"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_diagonal(0);
    print_diagonal(2);
    print_diagonal(10);
    print_diagonal(-4);
    return (0);
}
void _putchar(char c)
{
	printf("%c", c);
}
