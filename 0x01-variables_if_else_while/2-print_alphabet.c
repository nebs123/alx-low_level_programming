#include <stdio.h>


/**
 * main - entry point for our program
 *
 * Description: prints out the alphabet in small letters
 * Return: always sucess(value 0)
 */
int main(void)
{
	char start = 'a';

	while (start <= 'z')
	{
		putchar(start);
		start++;
	}
	putchar('\n');

	return (0);
}
