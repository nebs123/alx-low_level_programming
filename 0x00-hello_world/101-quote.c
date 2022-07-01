#include <stdio.h>
#include <string.h>
/**
 * main - This is the entry point for our code.
 *
 * Description: prints out the message in msg to standard error
 * Return: Always returns 0 (Success).
 */
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, \
2015-10-19\n";
	fwrite(msg, 1, strlen(msg), stderr);
	return (0);
}
