#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes of s2 to concatenate
 *
 * Return: A pointer to the newly allocated concatenated string
 *         NULL if memory allocation fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length_s1 = 0, length_s2 = 0, i = 0, j = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[length_s1] != '\0')
		length_s1++;
	while (s2[length_s2] != '\0')
		length_s2++;

	if (n >= length_s2)
		n = length_s2;

	concat = malloc(sizeof(char) * (length_s1 + n + 1));

	if (concat == NULL)
		return (NULL);

	for (; i < length_s1; i++)
		concat[i] = s1[i];
	for (; j < n; j++)
		concat[i + j] = s2[j];

	concat[i + j] = '\0';

	return (concat);
}
