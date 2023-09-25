#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: The string to search within.
 * @needle: The substring to find.
 *
 * Return: A pointer to the beginning of the located substring, or NULL if the
 * substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *haystack_pointer;
	char *needle_pointer;

	while (*haystack)
	{
		haystack_pointer = haystack;
		needle_pointer = needle;

		while (*haystack_pointer && *needle_pointer
				&& *haystack_pointer == *needle_pointer)
		{
			haystack_pointer++;
			needle_pointer++;
		}

		if (!*needle_pointer)
		{
			return (haystack);
		}

		haystack++;
	}

	return ('\0');
}
