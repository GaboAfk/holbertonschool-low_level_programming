#include <stdio.h>

/**
 * main - print numbers 0 to 9 with putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);

	putchar('\n');

	return (0);
}

