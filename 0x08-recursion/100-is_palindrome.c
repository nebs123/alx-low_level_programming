#include "main.h"

int is_palindrome_helper(char *, char *);
char *find_end(char *);

/**
 * is_palindrome - checks if string s is a palindrome
 * @s: stirg input
 *
 * Return: returns 1 if s is palindrome or 0 if not
 */
int is_palindrome(char *s)
{
	return (is_palindrome_helper(s, find_end(s)));
}

/**
 * is_palindrome_helper - helper for is_palindrome
 * @start: start of string
 * @end: end of string
 * Return: 1 if the string or substring is a palindrome
 */
int is_palindrome_helper(char *start, char *end)
{
	if (start > end)
		return (1);
	return (*start == *end && is_palindrome_helper(start + 1, end - 1));
}

/**
 * find_end - finds the end of string pointed to by s
 * @s: string whose end is to be found
 *
 * Return: pointer to the end of the string
 */
char *find_end(char *s)
{
	if (!*s)
		return (--s);
	return (find_end(s + 1));
}
