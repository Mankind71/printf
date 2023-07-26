#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stddef.h>
#include <stdarg.h>

int my_write(char c);
int my_write2(const char *c, int count);
int format_none(const char *format);
int _printf(const char *format, ...);
int s_specifier(va_list args);
int d_specifier(int args);
int b_specifier(int x);

#endif
