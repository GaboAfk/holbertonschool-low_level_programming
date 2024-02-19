#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 *
 * Return: NULL
 */
void print_times_table(int n)
{
        int i, j, x;

	if (n == 0 || n > 0 && n < 15)
	{
        	for (i = 0; i <= n; i++)
        	{
			for (j = 0; j <= n; j++)
                	{
                        	x = i * j;

				if (x <= 9)
			   		_putchar(x + '0');
	
				else if (x <= 99)
                        	{
                                	_putchar(x / 10 + '0');
                                	_putchar(x % 10 + '0');
                       	 	}	
				else
                        	{
                                	_putchar(x / 100 + '0');
                                	_putchar(((x / 10) % 10) + '0');
                                	_putchar(x % 10 + '0');
                       	 	}


				if (j < n)
                        	{
                                	_putchar(',');
                                	_putchar(' ');

                                	if (x + i < 100)
					{
                                        	_putchar(' ');

						if (x +i < 10) 
                                        		_putchar(' ');
					}
                        	}
                	}
	        _putchar('\n');
       		}
	}
}
