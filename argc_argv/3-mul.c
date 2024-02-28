/*
 * File: 3-mul.c
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
 * main - multiplies two numbers from input.
 * @argc: number of arguments when compile.
 * @argv: array of strings passed when compile.
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d\n", _atoi(argv[1]) * _atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
