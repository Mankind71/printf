#include "main.h"

/**
 * format_none - no format
 *
 * @format: arg to print
 * Return: 2
 */

int format_none(char format)
{
	char ch = '%';

	my_write(ch);
	my_write(format);
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
	int num_written = 0, i;
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
			if (*format == 'c')
			{
				char c = va_arg(ap, int);

				num_written += my_write(c);
			}
			else if (*format == 's')
			{
				char *str = va_arg(ap, char *);

				for (i = 0; str[i] != '\0'; i++)
					num_written += my_write(str[i]);
			}
			else if (*format == '%')
				num_written += my_write(ch);
			else
				num_written += format_none(*format);
			format++;
		}
		else
			num_written += write(1, format++, 1);
	}
	va_end(ap);

	return (num_written);
}
