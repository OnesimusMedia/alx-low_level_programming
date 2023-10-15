#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Print the opcodes of this function
 * @addr: Starting address of the function
 * @size: Size in bytes
 */
void print_opcodes(void *addr, int size)
{
	unsigned char *opcodes = (unsigned char *)addr;
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%02x", opcodes[i]);
		if (i < size - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 on success, 1 for incorrect arguments, 2 for negative bytes
 */
int main(int argc, char *argv[])
{
	int num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes(main, num_bytes);

	return (0);
}
