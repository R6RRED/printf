#include <stdio.h>
int ft_printf(const char *format,...)
{
    va_list list;
    int i = 0;
    int count = 0
    va_start(list,count);
    while(format[i])
    {
        if(format[i] == %)
        {
            if(format[i+1] == 'c')
            {
                ft_putchar(list[]);
                i++;
            }
            else if(format[i+1] == 's')
            {
                ft_putstr(list[count]);
                i++;
            }
            else if(format[i+1] == 'p')
            {
                i++;
            }
            else if(format[i+1] == 'd')
            {
                ft_putnbr(format[count]);
                i++;
            }
            else if(format[i+1] == 'i')
            {i++;}
            else if(format[i+1] == 'u')
            {i++;}
            else if(format[i+1] == 'x')
            {i++;}
            else if(format[i+1] == 'X')
            {i++;}
            else if(format[i+1] == '%')
            {i++;}
            else
            ft_putchar(format[i]);
            i++;
        }
    }
}
int main ()
{
    printf("%d",printf("%d %c  %s %%%%d\narrrr",34,'d', "grdsg"));
}