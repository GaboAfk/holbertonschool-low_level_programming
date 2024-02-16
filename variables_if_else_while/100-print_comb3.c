#include <stdio.h>

/**
 * main - print all possible combinations of two digit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (j = 0; j < 9; j++)
	{
		for (i = j + 1; i <= 9; i++)
		{
			putchar(j + '0');
			putchar(i + '0');

			if (j == 8)
			break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}

