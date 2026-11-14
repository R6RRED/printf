#include"printf.h"
#include <limits.h>
int print_hex(unsigned int n)
{
    char *hex="0123456789abcdef";
    int counter = 0;
    if(n < 16)
    {
                ft_putchar(hex[n]);
                return 0;
    }
    else
    {
        print_hex(n / 16);
        ft_putchar(hex[n % 16]);
    }return 0;

}
// int main()
// {
//     print_hex(INT_MIN);
//     return 0;
// }