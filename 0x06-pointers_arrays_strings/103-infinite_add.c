#include "main.h"
/**
 * infinite_add - adds the numbers in the two input strings
 * @n1: string which holds the 1st number
 * @n2: string which holds the 2nd number
 * @r: buffer to hold result
 * @size_r: size of buffer r
 * Return: the pointer to the character which holds the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	char *end1 = n1, *end2 = n2;
	int sum = 0, carry = 0, index = size_r - 1;

	*(r + index--) = '\0';
	while (*end1)
		end1++;
	while (*end2)
		end2++;
	end1--;
	end2--;
	while (index >= 0 && n1 <= end1 && n2 <= end2)
	{
		sum = (*end1 - '0') + (*end2 - '0') + carry;
		carry = sum / 10;
		*(r + index--) = (sum % 10) + '0';
		end1--;
		end2--;
	}
	while (n1 <= end1 && index >= 0)
	{
		sum = (*end1 - '0') + carry;
		carry = sum / 10;
		*(r + index--) = (sum % 10) + '0';
		end1--;
	}
	while (n2 <= end2 && index >= 0)
	{
		sum = (*end2 - '0') + carry;
		carry = sum / 10;
		*(r + index--) = (sum % 10) + '0';
		end2--;
	}
	if (carry && index >= 0)
	{
		*(r + index--) = carry + '0';
		carry = 0;
	}
	if (index < 0 && (n1 <= end1 || n2 <= end2 || carry))
		return (0);
	return (r + index + 1);
}
