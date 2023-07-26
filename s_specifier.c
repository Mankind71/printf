#include "main.h"
/**
 * s_specifier - prints variable of type str to sdout
 *
 * @args: variable pointer to print
 * Return: number of words written
*/

int s_specifier(va_list args)
{
	char *str = va_arg(args, char *);
	int num_written = 0;

	while (*str)
		num_written += my_write2(str++);
	return (num_written);
}
