#include"ft_printf.h"
#include <limits.h>
int print_hexbig(unsigned int n)
{
    char *hex="0123456789ABCDEF";
    int counter = 0;
    if(n < 16)
    {
        ft_putchar(hex[n]);
        counter += 1;
    }
    else
    {
        counter = counter + print_hexbig(n / 16);
        counter = counter + ft_putchar(hex[n % 16]);
    }return counter;

}
// int main()
// {
//     print_hex(INT_MIN);
//     return 0;
// }