#include <unistd.h>
#include <string.h>

int print(char message[]);
/**
 * main - starter function
 * print error message
 * Return: (1) Error
 */
int main(void)
{
       print("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
       return (1);
}
/**
 * print message function
 * print the message required
 * Return: (0) Succsses
 */
int print(char message[])
{
	write(STDERR_FILENO, message, strlen(message));
	return (0);
}
