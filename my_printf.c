#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

/**
 * my_write - checker
 *
 * @c: char to write
 * Return: 1
 */

int my_write(const char *c)
{
	return (write(1, c, 1));
}

/**
 * format_none - no format
 *
 * @format: arg to print
 * Return: 2
 */

int format_none(const char *format)
{
	char ch = '%';

	my_write(&ch);
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
	int num_written = 0;
	va_list ap;
	char ch = '%';

	va_start(ap, format);
	while (*format)
	{
		if (*format == ch)
		{
			format++;
			if (*format == 'c')
			{
				char c = va_arg(ap, int);

				num_written += my_write(&c);
			}
			else if (*format == 's')
			{
				char *str = va_arg(ap, char *);

				while (*str)
					num_written += my_write(str++);
			}
			else
				num_written += format_none(format);
			format++;
		}
		else
			num_written += my_write(format++);
	}
	va_end(ap);

	return (num_written);
}
