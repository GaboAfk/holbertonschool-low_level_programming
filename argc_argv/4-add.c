/*
 * File: 4-add.c
 * Auth: Gabriel Morffe
 */

#include <stdio.h>
/**
 * _atoi - string to an integer.
 * @s: string.
 * Return: integer.
 */
int _atoi(char *s)
{
	int n = 0, r = 0, i = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			if (n == 0)
				n = 1;
			else
				n = 0;
		}

		if (*s >= '0' && *s <= '9')
		{
			if (!i)
				i = 1;
			if (r < 0)
				r = r * 10 - (*s - '0');
			else
				r = -(*s - '0');
		}
		else if (i)
			break;
		s++;
	}

	if (!n)
		r = -r;
	return (r);
}
/**
 * main - add numbers from input and prints its result.
 * @argc: number of arguments when compile.
 * @argv: array of strings passed when compile.
 * Return: 0 (Success). 1 if isnt a number.
 */
int main(int argc, char **argv)
{
	int r = 0, i;
	char *num;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		num = argv[i];

		while (*num)
		{
			if (*num < '0' || *num > '9')
			{
				printf("Error\n");
				return (1);
			}
			num++;
		}

		r += _atoi(argv[i]);
	}

	printf("%d\n", r);
	return (0);
}
