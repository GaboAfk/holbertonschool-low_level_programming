#include <stdio.h>
#include "main.h"

/**
 * main - putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char text[] = "_putchar\n";

	int i;
	for (i = 0; text[i] != '\0'; i++)
        _putchar(text[i]);
    
	return (0);
}

