#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
int main(void)
{
	char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int len = strlen(msg);

	write(STDERR_FILENO, msg, len);
	return (1);
}
