#include <stdio.h>
#include "printf.h"
int ft_printf(const char *format,...)
{
    va_list list;
    int i = 0;
    int count = 0;
    va_start(list, format);
    while(format[i])
    {
        if(format[i] == '%' && format[i+1])
        {
            i++;
            if(format[i] == 'c')
            {
                count = count + ft_putchar(va_arg(list,int));
                i++;
            }
            else if(format[i] == 's')
            {
                count = count + ft_putstr(va_arg(list,char *));
                i++;
            }
            else if(format[i] == 'p')
            {
                count = count + ft_pointer(va_arg(list, void *)); 
                i++;
            }
            else if(format[i] == 'd')
            {
                count = count + ft_putnbr(va_arg(list,int));
                i++;
            }
            else if(format[i] == 'i')
            {
                count = count + ft_putnbr(va_arg(list,int));
                i++;
            }
            else if(format[i] == 'u')
            {
                count = count + ft_putnbr(va_arg(list,unsigned int));
                i++;
            }
            else if(format[i] == 'x')
            {
                count = count + print_hex(va_arg(list,unsigned int));
                i++;
            }
            else if(format[i] == 'X')
            {
                count = count + print_hexbig(va_arg(list,unsigned int));
                i++;}
            else if(format[i] == '%')
            {
                count = count + ft_putchar('%');
                i++;
            }
            else
            {
                count = count + ft_putchar('%');
                count = count + ft_putchar(format[i]);
                i++;
            }
        }
        else
        {
            count = count + ft_putchar(format[i]);
            i++;
        }
    }return count;
}

int main(void)
{
    int a = 42;
    char c = 'A';
    int *ptr = &a;
    char *str = &c;

    printf("Original: %p\n", (void *)&a);
    ft_printf("Mine:     %p\n\n", (void *)&a);

    printf("Original: %p\n", (void *)str);
    ft_printf("Mine:     %p\n\n", (void *)str);

    printf("Original: %p\n", (void *)ptr);
    ft_printf("Mine:     %p\n", (void *)ptr);

    return (0);
}