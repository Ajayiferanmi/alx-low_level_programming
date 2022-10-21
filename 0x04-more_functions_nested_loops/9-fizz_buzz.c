#include "main.h"

/**
 * main - print fizzbuzz
 * Return: Always 0
 */
void fizz_buzz(void)
{
	int n;

	for (n = 1; n < 100; n++)
	{
		if (n == 100)
			printf("buzz");
		else if (n % 3 == 0 && n % 5 == 0)
			printf("fizzbuzz ");
		else if	(n % 3 == 0)
			printf("fizz ");
		else if 
			(n % 5 == 0)
				printf("buzz ");
		else
			printf("%d", n);
	}
	printf("\n");
}
