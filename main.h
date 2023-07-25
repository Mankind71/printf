#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stddef.h>
#include <stdarg.h>

int my_write(char const *c);
int format_none(const char *format);
int _printf(const char *format, ...);

#endif
