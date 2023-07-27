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

	if (str == NULL)
		str = "(null)";
	while (*str)
		num_written += my_write2(str++, 1);
	return (num_written);
}
