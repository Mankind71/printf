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

    while (*format)
    {
        write(1, format, 1);
        format++;
        num_written++;
    }
    
    printf("%d",num_written);

    return num_written;
}