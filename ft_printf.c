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
        if(format[i] == '%')
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
                count = count + 
                i++;
            }
            else if(format[i] == 'd')
            {
                count = count + ft_putnbr(va_arg(list,int));
                i++;
            }
            else if(format[i] == 'i')
            {i++;}
            else if(format[i] == 'u')
            {
                count = count + ft_putnbr(va_arg(list,unsigned int));
                i++;
            }
            else if(format[i] == 'x')
            {
                count = count + 
                i++;}
            else if(format[i] == 'X')
            {
                count = count + 
                i++;}
            else if(format[i] == '%')
            {
                count = count + ft_putchar('%');
                i++;
            }
            else
            {
                count = count + ft_putchar(format[i]);
                i++;
            }
        }
        else
        {
            ft_putchar(format[i]);
            i++;
        }
    }return count;
}
int main ()
{
    ft_printf("%s   %c %d","djckjdwkc", 'f', 94809482);
    //ft_printf("%d",ft_printf("%d    ",44));
}