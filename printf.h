#ifndef PRINTF_H
#define PRINTF_H

#include<stdlib.h>
#include<stdarg.h>
#include<unistd.h>
#include<stdarg.h>

void *malloc(size_t size);
void free(void *ptr);
ssize_t write(int fd, const void *buf, size_t count);
int ft_putchar(char c);
// void va_start(va_list ap, last);
// type va_arg(va_list ap, type);
// void va_end(va_list ap);
// void va_copy(va_list dest, va_list src);

#endif