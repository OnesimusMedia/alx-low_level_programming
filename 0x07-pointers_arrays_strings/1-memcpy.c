#include <stdio.h>

/**
 * _memcpy - Copies memory area.
 * @dest: Pointer to the destination memory area.
 * @src: Pointer to the source memory area.
 * @n: Number of bytes to copy.
 *
 * Return: A pointer to the destination memory area `dest`.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *temp = malloc(n);

	if (temp == NULL)
	{
		return (NULL);
	}

	for (unsigned int i = 0; i < n; i++)
	{
		temp[i] = src[i];
	}

	for (unsigned int i = 0; i < n; i++)
	{
		dest[i] = temp[i];
	}

	free(temp);

	return (dest);
}
