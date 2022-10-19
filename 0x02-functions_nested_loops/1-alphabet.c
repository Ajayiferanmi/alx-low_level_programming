#include "main.h"

/**
 * print all alphabet lowercase
 */

void print_alphabet(void);
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
