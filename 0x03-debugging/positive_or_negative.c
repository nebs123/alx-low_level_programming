#include "main.h"

void positive_or_negative(int i)
{
	printf("%d ", i);
	if (i > 0)
		printf("is positive\n");
	else if (i == 0)
		printf("is zero\n");
	else
		printf("is negative\n");
}
