#include <stdio.h>


/**
 * main - entry point for our program
 *
 * Description: prints out the alphabet in small letters in reverse
 * Return: always sucess(value 0)
 */
int main(void)
{
	char start = 'z';

	while (start >= 'a')
	{
		putchar(start);
		start--;
	}
	putchar('\n');

	return (0);
}
