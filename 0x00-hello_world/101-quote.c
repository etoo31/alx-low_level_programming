#include <unistd.h>
#include <string.h>
/**
 * main - starter function
 * print error message
 * Return: (1) Error
 */
int main(void)
{
	char *message;

	*message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(STDERR_FILENO, message, strlen(message));
	return (1);
}
