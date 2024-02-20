#include "main.h"

/**
 * fizz_buzz - prints the numbers from 1 to 100, followed by a new line,
 * 		each three will be Fizz, five by Buzz and multiples of both
 * 		FizzBuzz.
 * @size: size of square.
 */
void fizz_buzz(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		if ((i % 3) == 0)
			printf("Fizz");

		else if ((i % 5) == 0)
			printf("Buzz");

		else if (((i % 3) == 0) && ((i % 5) == 0))
			printf("FizzBuzz");

		else printf("%d",i);

		if (i < 100)
			printf(" ");
	}
	_putchar('\n');
}
