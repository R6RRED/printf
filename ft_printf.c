#include <stdio.h>
#include"ft_printf.h"
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
                count = count + ft_putunbr(va_arg(list,unsigned int));
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
    }va_end(list);
return (count);
}
#include <limits.h>
int main(void)
{
    int a = -42;
    int b = 42;
    unsigned int u = 4294967295;
    char *str = "Hello, world!";
    char *null_str = NULL;
    int x = 0;
    int count1;
    int count2;

    printf("========== CHAR TESTS ==========\n");
    count1 = ft_printf("ft  : [%c]\n", 'A');
    count2 = printf("org : [%c]\n", 'A');
    printf("ft return: %d | org return: %d\n\n", count1, count2);

    ft_printf("ft  : [%c]\n", 0);
    printf("org : [%c]\n\n", 0);

    printf("========== STRING TESTS ==========\n");
    ft_printf("ft  : [%s]\n", str);
    printf("org : [%s]\n\n", str);

    ft_printf("ft  : [%s]\n", "");
    printf("org : [%s]\n\n", "");

    ft_printf("ft  : [%s]\n", null_str);
    printf("org : [%s]\n\n", null_str);

    printf("========== POINTER TESTS ==========\n");
    ft_printf("ft  : [%p]\n", &a);
    printf("org : [%p]\n\n", &a);

    ft_printf("ft  : [%p]\n", NULL);
    printf("org : [%p]\n\n", NULL);

    printf("========== DECIMAL / INTEGER TESTS ==========\n");
    ft_printf("ft  : [%d]\n", a);
    printf("org : [%d]\n\n", a);

    ft_printf("ft  : [%i]\n", b);
    printf("org : [%i]\n\n", b);

    ft_printf("ft  : [%d]\n", 0);
    printf("org : [%d]\n\n", 0);

    ft_printf("ft  : [%d]\n", INT_MAX);
    printf("org : [%d]\n\n", INT_MAX);

    ft_printf("ft  : [%d]\n", INT_MIN);
    printf("org : [%d]\n\n", INT_MIN);

    printf("========== UNSIGNED TESTS ==========\n");
    ft_printf("ft  : [%u]\n", u);
    printf("org : [%u]\n\n", u);

    ft_printf("ft  : [%u]\n", 0);
    printf("org : [%u]\n\n", 0);

    ft_printf("========== HEXADECIMAL TESTS ==========\n");
    ft_printf("ft  : [%x]\n", 255);
    printf("org : [%x]\n\n", 255);

    ft_printf("ft  : [%X]\n", 255);
    printf("org : [%X]\n\n", 255);

    ft_printf("ft  : [%x]\n", 0);
    printf("org : [%x]\n\n", 0);

    ft_printf("ft  : [%X]\n", UINT_MAX);
    printf("org : [%X]\n\n", UINT_MAX);

    printf("========== PERCENT TESTS ==========\n");
    ft_printf("ft  : [%%]\n");
    printf("org : [%%]\n\n");

    printf("========== MIXED TESTS ==========\n");
    ft_printf("ft  : [%c %s %d %i %u %x %X %%]\n",
        'Z', "test", -42, 42, u, 255, 255);
    printf("org : [%c %s %d %i %u %x %X %%]\n",
        'Z', "test", -42, 42, u, 255, 255);

    return (0);
}
