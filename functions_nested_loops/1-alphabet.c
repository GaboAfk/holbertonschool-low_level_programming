#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed 
 * 			by a new line
 *
 * Return: void
 */
void print_alphabet(void)
{
	int i;

	for(i = 97; i < 123; i++)
		_putchar(i);
		
	_putchar('\n');
}

/**
 * main - use prnt function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
