#include <stdlib.h>

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, word_count, word_length;
	
	if (str == NULL || *str == '\0')
		return (NULL);
	
	word_count = 0;
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			word_count++;
			while (str[i] != ' ' && str[i])
				i++;
		}
	}
	
	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);
	
	for (i = 0, k = 0; str[i] && word_count; i++)
	{
		if (str[i] != ' ')
		{
			word_length = 0;
			while (str[i] != ' ' && str[i])
			{
				word_length++;
				i++;
			}

			words[k] = malloc(word_length + 1);
			if (words[k] == NULL)
			{
				for (k = 0; k < word_count; k++)
					free(words[k]);
				free(words);
				return (NULL);
			}
			
			for (j = i - word_length; j < i; j++)
				words[k][j - (i - word_length)] = str[j];
			words[k][j - (i - word_length)] = '\0';
			k++;
			word_count--;
		}
	}
	words[k] = NULL;
	
	return (words);
}
