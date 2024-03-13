#ifndef VAR_FUNCT
#define VAR_FUNCT
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * f - struct of strings and function pointer to void.
 * f: string.
 * p: function pointer.
 */
typedef struct f
{
	char *f;
	void (*p)(va_list);
} form;

#endif
