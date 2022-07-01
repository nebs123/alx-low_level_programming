#include <stdio.h>


/**
 * main - entry point for our program
 *
 * Description: prints out the alphabet in small letters except for q & e
 * Return: always sucess(value 0)
 */
int main(void)
{
	char start = 'a';

	while (start <= 'z')
	{
		if (start != 'e' && start != 'q')
			putchar(start);
		start++;
	}
	putchar('\n');

	return (0);
}
