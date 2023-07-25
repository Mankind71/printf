#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stddef.h>
#include <stdarg.h>

int my_write(char c);
int my_write2(const char *c);
int format_none(char format);
int _printf(const char *format, ...);
int s_specifier(const char *str);

#endif
