#include "main.h"

/**
 * count_words - counts the number of words in string
 * @ptr: input string
 *
 * Return: number of space separated words in strings
 */
int count_words(char *ptr)
{
	int count = 0;

	while (*ptr)
	{
		while (*ptr && *ptr == ' ')
			ptr++;
		if (*ptr)
			count++;
		while (*ptr && *ptr != ' ')
			ptr++;
	}

	return (count);
}

/**
 * strtow - returns an array of words found in str
 * @str: string input
 *
 * Return: an array of strings which are words in str, NULL on failure
 */
char **strtow(char *str)
{
	int n, words, wordlen, z;
	char **wordArr, *str_count, *word;

	words = count_words(str);
	if (str == NULL || !*str || !words)
		return (NULL);
	wordArr = (char **) malloc(sizeof(int *) * (words + 1));
	if (wordArr == NULL)
		return (NULL);
	for (n = 0; n < words; n++)
	{
		while (*str && *str == ' ')
			str++;
		str_count = str;
		wordlen = 0;
		while (*str_count && *str_count != ' ')
		{
			wordlen++;
			str_count++;
		}
		word = (char *) malloc(sizeof(char) * (wordlen + 1));
		if (word == NULL)
		{
			for (z = 0; z < n; z++)
			{
				free(*(wordArr + z));
			}
			free(wordArr);
			return (NULL);
		}
		*(wordArr + n) = word;
		while (*str && *str != ' ')
		{
			*word++ = *str++;
		}
		*word = '\0';
	}
	*(wordArr + n) = NULL;
	return (wordArr);
}
