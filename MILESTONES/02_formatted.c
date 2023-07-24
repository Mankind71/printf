#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

/**
 * _printf - produces o/p according to a format
 *
 * @format: the format
 *
 * Return: the number of chars printed
 */

int my_printf(const char *format, ...)
{
	int num_written;
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

				num_written++;
				write(1, &c, 1);
			}
			else if (*format == 's')
			{
				char *str = va_arg(ap, char *);

				while (*str)
				{
					write(1, str, 1);
					num_written++;
					str++;
				}
			}
			else if (*format == '%')
			{
				write(1, &ch, 1);
				write(1, &ch, 1);
				num_written += 2;
			}
			else
			{
				write(1, &ch, 1);
				write(1, format, 1);
				num_written += 2;
			}
			format++;
		}
		else
		{
			write(1, format, 1);
			format++;
			num_written++;
		}
	}
	va_end(ap);

	printf("%d", num_written);

	return (num_written);
}
