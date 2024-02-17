#include <stdio.h>
#include "main.h"

/**
 * main - putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char letter[] = "_putchar";

	for(i = 0; letter[i] != '\0'; i++)
	{
		_putchar(letter[i]);	
		return (0);
	}
}
