#include <unistd.h>
/**
 * main - Prints out message in the standard error.
 * Return: 1 if success.
 */
int main(void)
{
	char message[] = 
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	int i;

	for (i = 0; message[i] != '\0'; i++)	
		write(2, &message[i], 1);

	return (1);
}
