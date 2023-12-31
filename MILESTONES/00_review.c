#include "main.h"

/**
 * format_none - no format
 *
 * @format: arg to print
 * Return: 2
 */

int format_none(const char *format)
{
	char ch = '%';

	my_write2(&ch, 1);
	my_write2(format, 1);
	return (2);
}

/**
 * _printf - produces o/p according to a format
 *
 * @format: the format
 *
 * Return: the number of chars printed
 */

int _printf(const char *format, ...)
{
	int num_written = 0;
	va_list ap;
	char ch = '%';

	if (format == NULL)
		return (-1);

	va_start(ap, format);
	while (*format)
	{
		if (*format == ch)
		{
			format++;
			if (!(*format))
				return (-1);
			else if (*format == 'c')
				num_written += my_write(va_arg(ap, int));
			else if (*format == 's')
				num_written += s_specifier(ap);
			else if (*format == 'd' || *format == 'i')
			{
				num_written += d_specifier((long int)va_arg(ap, int));
			}
			else if (*format == 'b')
			{
				num_written += b_specifier((long int)va_arg(ap, int));
			}
			else if (*format == ch)
				num_written += my_write(ch);
			else
				num_written += format_none(format);
			format++;
		}
		else
			num_written += my_write2(format++, 1);
	}
	va_end(ap);

	return (num_written);
}
