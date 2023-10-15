#include <stdlib.h>

/**
 * is_space - Checks if a character is a space.
 * @c: The character to check.
 *
 * Return: 1 if c is a space, 0 otherwise.
 */
int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	int i, j, word_count = 0;
	char **words;
	int in_word = 0;
	
	if (str == NULL || *str == '\0')
		return (NULL);
	
	for (i = 0; str[i]; i++)
	{
		if (!is_space(str[i]) && !in_word)
		{
			in_word = 1;
			word_count++;
		}
		else if (is_space(str[i]))
		{
			in_word = 0;
		}
	}
	
	if (word_count == 0)
	{
		return (NULL);
	}
	
	words = malloc(sizeof(char *) * (word_count + 1));
	
	if (words == NULL)
	{
		return (NULL);
	}

	in_word = 0;
	j = 0;
	
	for (i = 0; str[i]; i++)
	{
		if (!is_space(str[i]) && !in_word)
		{
			in_word = 1;
			words[j] = str + i;
			j++;
		}
		else if (is_space(str[i]))
		{
			in_word = 0;
			str[i] = '\0';
		}
	}
	
	words[word_count] = NULL;
	
	return (words);
}	
