#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of your program.
 * @ac: The argument count.
 * @av: An array of argument strings.
 *
 * Return: A pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int total_length = 0;
	char *concat;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			total_length++;
		total_length++;
	}

	concat = malloc(total_length + 1);
	if (concat == NULL)
		return (NULL);

	total_length = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			concat[total_length++] = av[i][j];
		concat[total_length++] = '\n';
	}

	concat[total_length] = '\0';

	return (concat);
}
