#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: Pointer to the string
 */
void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	int end = 0;
	int temp;

	// Calculate the length of the string
	while (s[length] != '\0')
	{
		length++;
	}

	end = length - 1;

	// Swap characters from both ends inward
	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}
