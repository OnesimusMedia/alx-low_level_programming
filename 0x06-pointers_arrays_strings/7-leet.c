#include "main.h"

/**
 * leet - Encodes a string into "1337".
 * @str: The input string to be encoded.
 *
 * Return: A pointer to the resulting encoded string.
 */
char *leet(char *str)
{
	char *ptr = str;
	char *leet_chars = "aAeEoOtTlL";
	char *leet_replacements = "4433007711";

	while (*ptr)
	{
		char *char_to_replace = leet_chars;
		char *replacement = leet_replacements;
		int found = 0;

		while (*char_to_replace)
		{
			if (*ptr == *char_to_replace)
			{
				*ptr = *replacement;
				found = 1;
				break;
			}
			char_to_replace++;
			replacement++;
		}

		if (!found)
		{
			ptr++;
		}
		else
		{
			ptr++;
		}
	}

	return (str);
}
