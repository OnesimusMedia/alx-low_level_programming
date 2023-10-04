#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer to a newly allocated space in memory
 * containing s1 followed by s2, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int length_s1 = 0, length_s2 = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[length_s1])
	{
		length_s1++;
	}
	while (s2[length_s2])
	{
		length_s2++;
	}

	concat = malloc(sizeof(char) * (length_s1 + length_s2 + 1));

	if (concat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length_s1; i++)
	{
		concat[i] = s1[i];
	}

	for (j = 0; j < length_s2; j++, i++)
	{
		concat[i] = s2[j];
	}

	concat[i] = '\0';

	return (concat);
}
