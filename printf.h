#ifndef PRINTF_H
#define PRINTF_H

#include<stdlib.h>
#include<stdarg.h>
#include<unistd.h>
#include<stdarg.h>

int print_hex(unsigned int n);
int	ft_putstr(char *s);
int ft_putchar(char c);
int ft_printf(const char *format,...);
int	ft_putnbr(int n);
int print_hexbig(unsigned int n);

#endif