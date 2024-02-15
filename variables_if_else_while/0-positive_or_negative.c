/*
 * File: 0-positive_or_negative.c
 * Auth: Gabriel Morffe <8677@holbertonschool.com>
 */

#include <stdio.h>
#inlcude <time.h>

/**
 * main - Entry point
 * randomize n, know is value
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand () - RAND_MAX / 2;

	if (n>0)
	{
		printf("is positive");
	} else if (n<0){
		printf("is negative");
	} else printf("is zero");

	return (0);
}
